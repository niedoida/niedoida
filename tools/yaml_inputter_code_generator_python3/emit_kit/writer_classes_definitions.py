# -*- coding: utf-8 -*-

class WriterClassesDefinitionsIn:

    def __init__(self, writer : 'like writer_kit.writer.Writer'):
        self.writer = writer

    def __call__(self, c : 'like classes_kit.class_class.Class'):
        s = "struct " + c.name + " {"
        self.writer.write_line(s)
        self.writer.push_back_indent("    ")
        for e in c.inner_enums:
            self.writer.write_lines(e.definition())


class WriterClassesDefinitionsOut:

    def __init__(self, writer : 'like writer_kit.writer.Writer'):
        self.writer = writer        
        
    def __call__(self, c : 'like classes_kit.class_class.Class'):
        for field in c.fields:
            self.writer.write_line(field.definition())
        self.writer.pop_indent()
        self.writer.write_line("};")


