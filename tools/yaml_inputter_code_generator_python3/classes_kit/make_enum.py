# -*- coding: utf-8 -*-

from . import class_enum
from . import check_stray_fields


def make_enum(node):
    # *************************************************************************
    if not isinstance(node, dict):
        error1 = "[ERROR] [NodeTypeError]"
        error2 = "Yaml::node defining the enum is not a map-yaml-node."
        raise RuntimeError(error1 + " " + error2)
    # *************************************************************************
    valid_fields = {"cpp-name", "cpp-values"}
    check_stray_fields.check_stray_fields(valid_fields, node)
    # *************************************************************************
    cpp_name_node = node.get("cpp-name")
    if cpp_name_node == None:
        error1 = "[ERROR] [KeyError]"
        error2 = "'cpp-name' sub-node is not defined."
        raise RuntimeError(error1 + " " + error2)
    if not isinstance(cpp_name_node, str):
        error1 = "[ERROR] [NodeTypeError]"
        error2 = "'cpp-name' sub-node is not a scalar-yaml-node."
        raise RuntimeError(error1 + " " + error2)
    cpp_name = cpp_name_node
    # *************************************************************************
    cpp_values_node = node.get("cpp-values")
    if cpp_values_node == None:
        error1 = "[ERROR] [KeyError]"
        error2 = "'cpp-values' sub-node is not defined."
        raise RuntimeError(error1 + " " + error2);
    if not isinstance(cpp_values_node, list):
        error1 = "[ERROR] [NodeTypeError]"
        error2 = "'cpp-values' sub-node is not a sequence-yaml-node."
        raise RuntimeError(error1 + " " + error2)
    cpp_values = cpp_values_node
    # *************************************************************************
    return class_enum.Enum(cpp_name, cpp_values)

