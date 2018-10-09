# -*- coding: utf-8 -*-

from . import class_class
from . import make_enum
from . import make_field
from . import check_stray_fields


def make_class(node, namesapces : list):
    if not isinstance(node, dict):
        error = "[ERROR] [NodeTypeError] Yaml::node defining the class is not a map-yaml-node."
        prompt = "Such a node is required to be a map-yaml-node"
        raise RuntimeError(error + " " + prompt)
    # *************************************************************************
    valid_fields = {"name", "classes", "enums", "fields"}
    check_stray_fields.check_stray_fields(valid_fields, node)
    # *************************************************************************
    name_node = node.get("name")
    if name_node == None:
        error = "[ERROR] [KeyError] 'name' sub-node is not defined."
        prompt = "Such node is required"
        raise RuntimeError(error + " " + prompt)
    if isinstance(name_node, (list, dict)):
        error = "[ERROR] [NodeTypeError] 'name' sub-node is not a scalar-yaml-node."
        prompt = "Such a node is required to be a scalar-yaml-node."
        raise RuntimeError(error + " " + prompt)
    name = str(name_node)
    sub_namesapces = namesapces + [name]
    # *************************************************************************
    enums_node = node.get("enums")
    try:
        enums = read_enums(enums_node)
    except RuntimeError as e:
        where = "class " + name + " (in " + "::".join(namesapces) + ")"
        message = "[BACKTRACE] Error occurred when read inner enums for " + where + "."
        raise RuntimeError(message + "\n" + str(e))
    # *************************************************************************
    classes_node = node.get("classes")
    try:
        classes = read_classes(classes_node, sub_namesapces)
    except RuntimeError as e:
        where = "class " + name + " (in " + "::".join(namesapces) + ")"
        message = "[BACKTRACE] Error occurred when read inner classes for " + where + "."
        raise RuntimeError(message + "\n" + str(e))
    # *************************************************************************
    field_node = node.get("fields")
    try:
        fields = read_fields(field_node)
    except RuntimeError as e:
        where = "class " + name + " (in " + "::".join(namesapces) + ")"
        message = "[BACKTRACE] Error occurred when read fields for " + where + "."
        raise RuntimeError(message + "\n" + str(e))
    # *************************************************************************
    return class_class.Class(namesapces, name, enums, classes, fields)





def read_enums(node):
    if not node == None and not isinstance(node, (list, dict)):
        error = "[ERROR] [NodeTypeError] Unexpected scalar-yaml-node."
        prompt = "Expected optional sequence-yaml-node with enums definitions."
        raise RuntimeError(error + "\n" + prompt)
    if isinstance(node, dict):
        error = "[ERROR] [NodeTypeError] Unexpected map-yaml-node."
        prompt = "Expected optional sequence-yaml-node with enums definitions."
        raise RuntimeError(error + "\n" + prompt)
    n_enums = len(node) if isinstance(node, list) else 0
    enums = []
    for i in range(n_enums):
        try:
            f = make_enum.make_enum(node[i])
            enums.append(f)
        except RuntimeError as e:
            where = "enum no " + str(i)
            message = "[BACKTRACE] Error occurred when read " + where + "."
            raise RuntimeError(message + "\n" + str(e))
    return enums


def read_classes(node, namesapces):
    if not node == None and not isinstance(node, (list, dict)):
        error = "[ERROR] [NodeTypeError] Unexpected scalar-yaml-node."
        prompt = "Expected optional sequence-yaml-node with classes definitions."
        raise RuntimeError(error + "\n" + prompt)
    if isinstance(node, dict):
        error = "[ERROR] [NodeTypeError] Unexpected map-yaml-node."
        prompt = "Expected optional sequence-yaml-node with classes definitions."
        raise RuntimeError(error + "\n" + prompt)
    n_classes = len(node) if isinstance(node, list) else 0
    classes = []
    for i in range(n_classes):
        try:
            c = make_class(node[i], namesapces)
            classes.append(c)
        except RuntimeError as e:
            where = "class no " + str(i)
            message = "[BACKTRACE] Error occurred when read " + where + "."
            raise RuntimeError(message + "\n" + str(e))
    return classes

    
def read_fields(node):
    if not node == None and not isinstance(node, (list, dict)):
        error = "[ERROR] [NodeTypeError] Unexpected scalar-yaml-node."
        prompt = "Expected optional sequence-yaml-node with fields definitions."
        raise RuntimeError(error + "\n" + prompt)
    if isinstance(node, dict):
        error = "[ERROR] [NodeTypeError] Unexpected map-yaml-node."
        prompt = "Expected optional sequence-yaml-node with fields definitions."
        raise RuntimeError(error + "\n" + prompt)
    n_fields = len(node) if isinstance(node, list) else 0
    fields = []    
    for i in range(n_fields):
        try:
            f = make_field.make_field(node[i])
            fields.append(f)
        except RuntimeError as e:
            where = "field no " + str(i)
            message = "[BACKTRACE] Error occurred when read " + where + "."
            raise RuntimeError(message + "\n" + str(e))
    return fields    