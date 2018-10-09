# -*- coding: utf-8 -*-

import abc
import private_utility.ansi_escape as ansi_escape
import writer_kit.writer

# *****************************************************************************
# ***************  Field - abstract base class  *******************************
# *****************************************************************************
class Field(metaclass=abc.ABCMeta):
    def __init__(self, cpp_type : str, cpp_name : str, cpp_init : str):
        self.cpp_type = cpp_type
        self.cpp_name = cpp_name
        self.cpp_init = cpp_init

    def leaflet(self) -> str:
        s = ""
        s += ansi_escape.BgColorCyan + self.cpp_type + ansi_escape.Reset
        s += ansi_escape.BgColorCyan + " " + ansi_escape.Reset
        s += ansi_escape.BgColorCyan + ansi_escape.Bold + self.cpp_name + ansi_escape.Reset
        s += ansi_escape.BgColorCyan + self.cpp_init + ansi_escape.Reset
        s += ansi_escape.BgColorCyan + "; " + ansi_escape.Reset
        return s;

    def definition(self) -> str:
        return self.cpp_type + " " + self.cpp_name + self.cpp_init + ";"

    def fill(self) -> list:
        return []

# *****************************************************************************
class FieldWithKeys(Field, metaclass=abc.ABCMeta):
    def __init__(self, cpp_type : str, cpp_name : str, cpp_init : str, input_keys : list):
        super().__init__(cpp_type, cpp_name, cpp_init)
        self.input_keys = input_keys[:]

# *****************************************************************************
class FillerFilledField(FieldWithKeys, metaclass=abc.ABCMeta):
    def leaflet(self) -> str:
        s = super().leaflet()
        s += ansi_escape.BgColorBlue + "**" + self.fill_strategy_name() + "**" + ansi_escape.Reset
        s += ansi_escape.BgColorBlue + " " + ansi_escape.Reset
        s += ansi_escape.BgColorBlue + "yaml-key: " + ansi_escape.Reset
        s += ansi_escape.BgColorBlue + ansi_escape.Bold + ansi_escape.Italic + "->".join(self.input_keys) + ansi_escape.Reset
        return s;

    def definition(self) -> str:
        s = super().definition()
        s += " // fill-strategy: " + self.fill_strategy_name()
        s += ", yaml-key: " + "->".join(self.input_keys)
        return s

    def fill(self):
        s_format = "filler.target(instance.{cpp_name})."
        s_format +="{proxy_object_method_name}(std::forward<Ts>(keys)..., {input_keys});"
        s = s_format.format( cpp_name = self.cpp_name,
                             proxy_object_method_name = self.proxy_object_method_name(),
                             input_keys = ", ".join(self.input_keys) )
        return [s];

    @abc.abstractmethod
    def fill_strategy_name(self): pass

    @abc.abstractmethod
    def proxy_object_method_name(self): pass

# *****************************************************************************
class SequenceWrapper(FieldWithKeys):

    def __init__(self, SequenceElementType : type,
                 cpp_type : str, cpp_name : str, cpp_init : str, input_keys : list):
        super().__init__(cpp_type, cpp_name, cpp_init, input_keys)
        self.sequence_element = SequenceElementType(cpp_type + "::value_type", cpp_name + "[index]", "", input_keys+["index"])

    def leaflet(self) -> str:
        s = super().leaflet()
        s += ansi_escape.BgColorGreen + " " + ansi_escape.Reset
        s += ansi_escape.BgColorGreen + self.container_type_name() + ansi_escape.Reset
        s += ansi_escape.BgColorGreen + " of " + ansi_escape.Reset
        s += self.sequence_element.leaflet()
        return s;

    def definition(self) -> str:
        s = super().definition()
        s += " // " + self.container_type_name() + " of "+ self.sequence_element.definition()
        return s;

    def fill(self) -> list:
        result = []
        w = writer_kit.writer.VectorWriter(result)
        w.write_line("{") # code-block open brace
        w.push_back_indent()
        w.write_line("std::size_t size = " + self.get_size_cpp_code() + ";")
        w.write_line("instance." + self.cpp_name + ".resize(size);")
        w.write_line("for(std::size_t index = 0; index < size; index++) {")
        w.push_back_indent()
        w.write_lines(self.sequence_element.fill())
        w.pop_indent()
        w.write_line("}") # loop close brace
        w.pop_indent()
        w.write_line("}") # code-block close brace
        return result

    @abc.abstractmethod
    def container_type_name(self): pass

    @abc.abstractmethod
    def get_size_cpp_code(self): pass


# *****************************************************************************
# ***************  Field - concrete subclasses  *******************************
# *****************************************************************************
class NoFillField(Field):

    def leaflet(self) -> str:
        s = super().leaflet()
        s += " // fill-strategy: none"
        return s

    def definition(self) -> str:
        s = super().definition()
        s += " // fill-strategy: none"
        return s

# *****************************************************************************
class FillerFilledRequiredField(FillerFilledField):

    def fill_strategy_name(self) -> str:
        return "required"

    def proxy_object_method_name(self) -> str:
        return "fill_required"


# *****************************************************************************
class FillerFilledRequiredScalarField(FillerFilledField):

    def fill_strategy_name(self) -> str:
        return "required-scalar"

    def proxy_object_method_name(self) -> str:
        return "fill_required_scalar"

# *****************************************************************************
class FillerFilledOptionalField(FillerFilledField):

    def fill_strategy_name(self) -> str:
        return "optional"

    def proxy_object_method_name(self) -> str:
        return "fill_optional"

# *****************************************************************************
class FillerFilledOptionalScalarField(FillerFilledField):

    def fill_strategy_name(self) -> str:
        return "optional-scalar"

    def proxy_object_method_name(self) -> str:
        return "fill_optional_scalar"

# *****************************************************************************
class DelegatedField(FieldWithKeys):

    def leaflet(self) -> str:
        s = super().leaflet()
        s += ansi_escape.BgColorBlue + "**delegated**" + ansi_escape.Reset
        s += ansi_escape.BgColorBlue + " " + ansi_escape.Reset
        s += ansi_escape.BgColorBlue + "yaml-key: " + ansi_escape.Reset
        s += ansi_escape.BgColorBlue + ansi_escape.Bold + ansi_escape.Italic + "->".join(self.input_keys) + ansi_escape.Reset
        return s;

    def definition(self) -> str:
        s = super().definition()
        s += " // fill-strategy: delegated"
        s += ", yaml-key: " + "->".join(self.input_keys)
        return s;

    def fill(self) -> list:
        s_format = "fill(instance.{cpp_name}, filler, std::forward<Ts>(keys)..., {input_keys});"
        s = s_format.format(cpp_name = self.cpp_name, input_keys = ", ".join(self.input_keys))
        return [s]

# *****************************************************************************
class RequiredSequence(SequenceWrapper):

    def container_type_name(self) -> str:
        return "required-sequence"

    def get_size_cpp_code(self) -> str:
        return "filler.required_sequence_size(" + ", ".join(self.input_keys) + ")"

# *****************************************************************************
class OptionalSequence(SequenceWrapper):

    def container_type_name(self) -> str:
        return "optional-sequence"

    def get_size_cpp_code(self) -> str:
        return "filler.optional_sequence_size(" + ", ".join(self.input_keys) + ")"

# *****************************************************************************
class FixedSizeSequence(SequenceWrapper):
    def __init__(self, SequenceElementType : type,
                 cpp_type : str, cpp_name : str, cpp_init : str, input_keys : list,
                 sequence_size : int):
        super().__init__(SequenceElementType,
                         cpp_type, cpp_name, cpp_init, input_keys)
        self.sequence_size = sequence_size

    def container_type_name(self) -> str:
        return "fixed-size-sequence (size=" + str(self.sequence_size) + ")";

    def get_size_cpp_code(self) -> str:
        return str(self.sequence_size)
