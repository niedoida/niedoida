# -*- coding: utf-8 -*-

import classes_kit.make_enum

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
            f = classes_kit.make_enum.make_enum(node[i])
            enums.append(f)
        except RuntimeError as e:
            where = "enum no " + str(i)
            message = "[BACKTRACE] Error occurred when read " + where + "."
            raise RuntimeError(message + "\n" + str(e))

    return enums