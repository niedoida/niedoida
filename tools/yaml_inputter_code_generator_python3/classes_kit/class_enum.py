# -*- coding: utf-8 -*-

import private_utility.ansi_escape as ansi_escape
import writer_kit.writer

class Enum:
    def __init__(self, cpp_name : str, cpp_values : list):
        self.cpp_name = cpp_name
        self.cpp_values = cpp_values[:]

    def leaflet(self) -> str:
        s = ansi_escape.BgColorGray + "enum " + self.cpp_name + ansi_escape.Reset
        s += " {"
        s += " ".join(self.cpp_values)
        s += " }"
        return s

    def definition(self) -> list:
        result = []
        w = writer_kit.writer.VectorWriter(result)
        w.write_line("enum " + self.cpp_name + " {")
        w.push_back_indent()
        for i in range(len(self.cpp_values)):
            ending = "" if i == len(self.cpp_values) - 1 else ","
            w.write_line(self.cpp_values[i] + ending)
        w.pop_indent()
        w.write_line("};")
        return result;
