# -*- coding: utf-8 -*-

from . import class_field
from . import check_stray_fields


def key_quotation(o):
    return '"' + o + '"' if isinstance(o, str) else str(o)


def make_field(node):
    if not isinstance(node, dict):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "Yaml::node defining the class field is not a map-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    # *************************************************************************
    valid_fields = {"cpp-name", "cpp-type", "cpp-init",
                    "fill-strategy", "input-key",
                    "container", "sequence-size"}
    check_stray_fields.check_stray_fields(valid_fields, node)
    # *************************************************************************
    cpp_name_node = node.get("cpp-name")
    if cpp_name_node == None:
         error1 = "[ERROR] [KeyError]"
         error2 = "'cpp-name' sub-node is not defined."
         raise RuntimeError(error1 + " " + error2)
    if isinstance(cpp_name_node, (list, dict)):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'cpp-name' sub-node is not a scalar-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    cpp_name = str(cpp_name_node)
    # *************************************************************************
    cpp_type_node = node.get("cpp-type")
    if cpp_type_node == None:
         error1 = "[ERROR] [KeyError]"
         error2 = "'cpp-type' sub-node is not defined."
         raise RuntimeError(error1 + " " + error2)
    if isinstance(cpp_type_node, (list, dict)):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'cpp-type' sub-node is not a scalar-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    cpp_type = str(cpp_type_node)
    # *************************************************************************
    cpp_init_node = node.get("cpp-init")
    if not cpp_init_node == None and isinstance(cpp_init_node, (list, dict)):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'cpp-init' sub-node is not a scalar-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    cpp_init = "" if cpp_init_node == None else str(cpp_init_node)
    # *************************************************************************
    fill_strategy_node = node.get("fill-strategy")
    if (not fill_strategy_node == None) and (not isinstance(fill_strategy_node, str)):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'fill-strategy' sub-node is not a scalar-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    try:
        fill_strategy_rules = {
            "none" : None,
            "required" : class_field.FillerFilledRequiredField,
            "required-scalar" : class_field.FillerFilledRequiredScalarField,
            "optional" : class_field.FillerFilledOptionalField,
            "optional-scalar" : class_field.FillerFilledOptionalScalarField,
            "delegated" : class_field.DelegatedField
        }
        fill_strategy = None if fill_strategy_node == None else fill_strategy_rules[fill_strategy_node]
    except(KeyError):
         error1 = "[ERROR] [ConversionError]"
         error2 = "'fill-strategy' sub-node conversion error."
         raise RuntimeError(error1 + " " + error2)
    # *************************************************************************
    if fill_strategy == None:
        valid_fields = {"cpp-name", "cpp-type", "cpp-init", "fill-strategy"}
        check_stray_fields.check_stray_fields(valid_fields, node)
        return class_field.NoFillField(cpp_type, cpp_name, cpp_init)
    # *************************************************************************
    input_key_node = node.get("input-key")
    if not input_key_node == None and not isinstance(input_key_node, (str, int, list)):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'input-key' sub-node is neither a str or int scalar-yaml-node nor a sequence-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    if input_key_node == None:
        input_keys = [cpp_name]
    if isinstance(input_key_node, str) or isinstance(input_key_node, int):
        input_keys = [input_key_node]
    if isinstance(input_key_node, list):
        input_keys = input_key_node
    for key in input_keys:
        if (not isinstance(key, str)) and (not isinstance(key, int)):
             error1 = "[ERROR] [NodeTypeError]"
             error2 = "on of the sub-nodes in 'input-key' is not a scalar-yaml-node."
             raise RuntimeError(error1 + " " + error2)
    input_keys = list(map(key_quotation, input_keys))
    # *************************************************************************
    container_node = node.get("container")
    if not container_node == None and not isinstance(container_node, str):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'container' sub-node is not a scalar-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    try:
        container_rules = {
            "none" : None,
            "required-sequence" : class_field.RequiredSequence,
            "optional-sequence" : class_field.OptionalSequence,
            "fixed-size-sequence" : class_field.FixedSizeSequence
        }
        container = None if container_node == None else container_rules[container_node]
    except KeyError:
         error1 = "[ERROR] [ConversionError]"
         error2 = "'container' sub-node conversion error."
         raise RuntimeError(error1 + " " + error2)
    # *************************************************************************
    if container == None:
        valid_fields = {"cpp-name", "cpp-type", "cpp-init",
                        "fill-strategy", "input-key",
                        "container"}
        check_stray_fields.check_stray_fields(valid_fields, node)
        return fill_strategy(cpp_type, cpp_name, cpp_init, input_keys)
    if container == class_field.RequiredSequence or container == class_field.OptionalSequence:
        valid_fields = {"cpp-name", "cpp-type", "cpp-init",
                        "fill-strategy", "input-key",
                        "container"}
        check_stray_fields.check_stray_fields(valid_fields, node)
        return container(fill_strategy,
                         cpp_type, cpp_name, cpp_init, input_keys)
    # *************************************************************************
    sequence_size_node = node.get("sequence-size")
    if sequence_size_node == None:
         error1 = "[ERROR] [KeyError]"
         error2 = "'sequence-size' sub-node is not defined."
         raise RuntimeError(error1 + " " + error2)
    if isinstance(sequence_size_node, (list, dict)):
         error1 = "[ERROR] [NodeTypeError]"
         error2 = "'sequence-size' sub-node is not a scalar-yaml-node."
         raise RuntimeError(error1 + " " + error2)
    try:
        sequence_size = int(sequence_size_node)
    except ValueError:
         error1 = "[ERROR] [ConversionError]"
         error2 = "'sequence-size' sub-node conversion error."
         raise RuntimeError(error1 + " " + error2)
    # *************************************************************************
    if container == class_field.FixedSizeSequence:
        return container(fill_strategy,
                         cpp_type, cpp_name, cpp_init, input_keys,
                         sequence_size)

    raise RuntimeError("Internal error while making field instance from yaml-node.")
    
