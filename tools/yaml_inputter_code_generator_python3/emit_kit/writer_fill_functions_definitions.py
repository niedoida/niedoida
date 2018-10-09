# -*- coding: utf-8 -*-

import classes_kit.class_field

class WriterFillFunctionsDefinitionsIn:

    def __init__(self, writer : 'like writer_kit.writer.Writer'):
        self.writer = writer
        
    def __call__(self, c : 'like classes_kit.class_class.Class'):
        pass


class WriterFillFunctionsDefinitionsOut:
    
    def __init__(self, writer : 'like writer_kit.writer.Writer'):
        self.writer = writer

    def __call__(self, c : 'like classes_kit.class_class.Class'):
        self.writer.write_line("template<class... Ts>")
        all_names = c.namesapces + [c.name]
        full_class_name = "::".join(all_names)
        syg = "void"
        syg += " "
        syg += "fill"
        syg += "("
        syg += full_class_name + "& instance,"
        syg += " " "const yaml_inputter::Filler & filler,"
        syg += " " "Ts&&... keys"
        syg += ")"
        self.writer.write_line(syg + " {")
        self.writer.push_back_indent()
        for field in c.fields:
            self.writer.write_lines(field.fill())
        correct_fields = []
        for field in c.fields:
            if isinstance(field, classes_kit.class_field.FieldWithKeys):
                correct_fields.append(field.input_keys[0])
        if correct_fields:
            self.writer.write_line("{  // check-stray-fields block");
            self.writer.push_back_indent();
            self.writer.write_line("std::set<std::string> correct_fields = {" + ", ".join(correct_fields) + "};")
            self.writer.write_line("filler.check_stray_fields(correct_fields, std::forward<Ts>(keys)...);")
            self.writer.pop_indent()
            self.writer.write_line("} // end of check-stray-fields block")
        self.writer.pop_indent()
        self.writer.write_line("} // end of fill function")
        self.writer.write_line("")