# -*- coding: utf-8 -*-

import private_utility.ansi_escape as ansi_escape

class WriterLeafletIn:
    
    def __init__(self, writer : 'like writer_kit.writer.Writer'):
        self.writer = writer

    def __call__(self, c : 'like classes_kit.class_class.Class'):
        s = ansi_escape.BgColorRed + "struct " + ansi_escape.Bold + c.name + ansi_escape.Reset
        self.writer.write_line(s)
        self.writer.push_back_indent("  | ")
        for e in c.inner_enums:
            self.writer.write_line(e.leaflet())    


class WriterLeafletOut:

    def __init__(self, writer : 'like writer_kit.writer.Writer'):
        self.writer = writer
    
    def __call__(self, c : 'like classes_kit.class_class.Class'):
        for field in c.fields:
            self.writer.write_line(field.leaflet())
        self.writer.pop_indent()