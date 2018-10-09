# -*- coding: utf-8 -*-

import classes_kit.make_field

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
            f = classes_kit.make_field.make_field(node[i])
            fields.append(f)
        except RuntimeError as e:
            where = "field no " + str(i)
            message = "[BACKTRACE] Error occurred when read " + where + "."
            raise RuntimeError(message + "\n" + str(e))

    return fields