# -*- coding: utf-8 -*-

def check_stray_fields(valid_fields : set, node : dict):
    if not isinstance(node, dict):
        message = "[ERROR] Error while checking stray fields - the checked node is not a map."
        raise RuntimeError(message)

    for field in node.keys():
        if not field in valid_fields:
            message = "[ERROR] Stray field '" + field + "' found."
            raise  RuntimeError(message)
