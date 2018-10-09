# -*- coding: utf-8 -*-

import writer_kit.writer
import classes_kit.classes_dfs
from . import writer_fill_functions_definitions
from . import emit_overriding_warning
from . import emitting_preprocessor_if_guard
from . import emitting_namespace_guard

def __emit_fill_functions_definitions_file_content(writer : 'like writer_kit.writer.Writer',
                                                   classes : 'like list of classes_kit.class_class.Class instances') :
        writer_in = writer_fill_functions_definitions.WriterFillFunctionsDefinitionsIn(writer);
        writer_out = writer_fill_functions_definitions.WriterFillFunctionsDefinitionsOut(writer);
        dfs = classes_kit.classes_dfs.ClassesDfs(writer_in, writer_out);
        for c in classes:
            dfs.go(c)


def _emit_fill_functions_definitions_file_content(writer : 'like writer_kit.writer.Writer',
                                                  classes_namespace : 'list of strings',
                                                  classes : 'like list of classes_kit.class_class.Class instances') :
        if classes_namespace:
            with emitting_namespace_guard.NamespaceGuard(writer, classes_namespace[0]):
                _emit_fill_functions_definitions_file_content(writer, classes_namespace[1:], classes)
        else:
            __emit_fill_functions_definitions_file_content(writer, classes)            


def emit_fill_functions_definitions_file_content(s : 'file',
                                                 headers_to_include : 'list of strings',
                                                 classes_namespace : 'list of strings',
                                                 classes : 'like list of classes_kit.class_class.Class instances'):


    emit_overriding_warning.emit_overriding_warning(s);
    heager_guard_macro = "INPUT_DATA_FILL_FUNCTIONS_HPP";
    with emitting_preprocessor_if_guard.PreprocessorIfGuard(s, heager_guard_macro):
        print("#include<set> // set used in check-stray-fields block", file=s)
        print("#include<yaml_inputter/templated_filler.hpp>", file=s)
        for header in headers_to_include:
            print("#include" + header + " // user request header", file=s)
        print("", file=s)
        writer = writer_kit.writer.StreamWriter(s)
        _emit_fill_functions_definitions_file_content(writer, classes_namespace, classes)
