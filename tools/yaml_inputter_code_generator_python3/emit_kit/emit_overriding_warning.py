# -*- coding: utf-8 -*-

import time

def emit_overriding_warning(s  : 'file'):
    print("/* Header file generated automatically by yaml-inputter-tk-code-generator.", file=s)
    print(" * The header content is based on the provided input-data-specification file.", file=s)
    print(" * File generation date: " + time.ctime(time.time()), file=s)
    print(" * WARNING: Do not modify this file!", file=s)
    print(" * (Every change will be overridden during the next compilation.)", file=s)
    print(" */", file=s)
    print("", file=s)
