# -*- coding: utf-8 -*-
import abc
import sys

class Writer(metaclass=abc.ABCMeta):
    def __init__(self):
        self.indents = []

    def _concatenate_indents(self):
        return ''.join(self.indents)

    @abc.abstractmethod
    def write_line(self, line : str):
        pass

    def write_lines(self, lines: list):
        for line in lines:
            self.write_line(line)

    def push_back_indent(self, indent : str = "    "):
        self.indents.append(indent)

    def pop_indent(self):
        self.indents.pop()


class StreamWriter(Writer):
    def __init__(self, file = sys.stdout):
        super().__init__()
        self.file = file

    def write_line(self, line):
        print(self._concatenate_indents() + line, file = self.file)


class VectorWriter(Writer):
    def __init__(self, result):
        super().__init__()
        self.result = result

    def write_line(self, line):
        self.result.append(self._concatenate_indents() + line)
