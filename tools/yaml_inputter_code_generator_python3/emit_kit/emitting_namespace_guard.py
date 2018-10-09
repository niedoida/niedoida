# -*- coding: utf-8 -*-

class NamespaceGuard:
    def __init__(self,
                 writer : 'like writer_kit.writer.Writer',
                 namespace_name : str):
                self.writer = writer
                self.namespace_name = namespace_name

    def __enter__(self):
        self.writer.write_line("namespace " + self.namespace_name + " {");
        self.writer.push_back_indent()
        
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.writer.pop_indent()
        self.writer.write_line("} // end of namespace " + self.namespace_name)