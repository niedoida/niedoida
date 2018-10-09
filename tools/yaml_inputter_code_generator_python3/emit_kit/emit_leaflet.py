# -*- coding: utf-8 -*-

import writer_kit.writer
import classes_kit.classes_dfs
from . import writer_leaflet

def emit_leaflet(s : 'file',
                 classes : 'like list of classes_kit.class_class.Class instances'):
    writer = writer_kit.writer.StreamWriter(s)
    writer_in = writer_leaflet.WriterLeafletIn(writer)
    writer_out = writer_leaflet.WriterLeafletOut(writer)
    dfs = classes_kit.classes_dfs.ClassesDfs(writer_in, writer_out)
    for c in classes:
        dfs.go(c)