# -*- coding: utf-8 -*-

import classes_kit.make_class

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
            c = classes_kit.make_class.make_class(node[i], namesapces)
            classes.append(c)
        except RuntimeError as e:
            where = "class no " + str(i)
            message = "[BACKTRACE] Error occurred when read " + where + "."
            raise RuntimeError(message + "\n" + str(e))

    return classes
