#!/usr/bin/python3
# -*- coding: utf-8 -*-

import sys
import argparse
import yaml

import classes_kit.make_class

from emit_kit.emit_leaflet import emit_leaflet
from emit_kit.emit_classes_definitions_file_content import emit_classes_definitions_file_content
from emit_kit.emit_fill_functions_definitions_file_content import emit_fill_functions_definitions_file_content

def print_po_value(name, value):
    print("{name:40s} : {value}".format(name=name, value=value))

###############################################################################
###################   main script         #####################################
###############################################################################

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='yaml-inputter code generator.')

    parser.add_argument("class_specification_file_path", #"--class-spec-path", "-s",
                        #dest="class_specification_file_path",
                        #required=True,
                        help="file path of input-data-specification to process.")

    #parser.add_argument("--class-spec-path", "-s",
    #                    dest="class_specification_file_path",
    #                    required=True,
    #                    help="file path of input-data-specification to process.")

    parser.add_argument("--namespace", "-n",
                        dest="classes_namespace",
                        nargs='+',
                        default=[],
                        help="namespace of the input-data classes.")

    parser.add_argument("--classes-include-list", "-i",
                        dest="classes_definitions_include",
                        nargs='+',
                        default=[],
                        help="list of the headers to include on top of the header file containing input-data class definition.")

    parser.add_argument("--class-def-path", "-c",
                        dest="classes_definitions_file_path",
                        default="input_data.hpp",
                        help="file path for generated header file containing input-data class definition.")

    parser.add_argument("--functions-include-list", "-j",
                        dest="fill_functions_definitions_include",
                        nargs='+',
                        default=[],
                        help="list of the headers to include on top of the header file containing functions fill(...) definitions.")

    parser.add_argument("--functions-def-path", "-f",
                        dest="fill_functions_definitions_file_path",
                        default="input_data_fill_functions.hpp",
                        help="file path for generated header file containing functions fill(...) definitions.")

    args = parser.parse_args()

    class_specification_file_path        = args.class_specification_file_path        # string
    classes_namespace                    = args.classes_namespace                    # list of string
    classes_definitions_file_path        = args.classes_definitions_file_path        # string
    classes_definitions_include          = args.classes_definitions_include          # list of string
    fill_functions_definitions_file_path = args.fill_functions_definitions_file_path # string
    fill_functions_definitions_include   = args.fill_functions_definitions_include   # list of string

    print_po_value("class_specification_file_path", class_specification_file_path)
    print_po_value("classes_namespace", classes_namespace)
    print_po_value("classes_definitions_file_path", classes_definitions_file_path)
    print_po_value("classes_definitions_include", classes_definitions_include)
    print_po_value("fill_functions_definitions_file_path", fill_functions_definitions_file_path)
    print_po_value("fill_functions_definitions_include", fill_functions_definitions_include)

    # *************************************************************************
    print("[INFO] Program is about to load class-specification-file.")
    try:
        stream = open(class_specification_file_path, 'r')
        try:
            input_data_specification_node = yaml.load(stream)
        except yaml.YAMLError as e:
            print("[GLOBAL ERROR] when loading the class-specification-file.", file=sys.stderr)
            print(str(e), file=sys.stderr)
            print("", file=sys.stderr)
            exit(1)
        print("[INFO] Class-specification-file was loaded successfully.")
    except IOError as e:
        print("[GLOBAL ERROR] when opening the class-specification-file.", file=sys.stderr)
        print(str(e), file=sys.stderr)
        print("", file=sys.stderr)
        exit(1)

    # *************************************************************************
    print("[INFO] Program is about to parse input-data-classes specification.")
    try:
        classes = classes_kit.make_class.read_classes(input_data_specification_node, [])
    except RuntimeError as e:
        print("[GLOBAL ERROR] when parse input-data-specification file.", file=sys.stderr)
        print(str(e), file=sys.stderr)
        print("", file=sys.stderr)
        exit(1)
    print("[INFO] parsed input-data-classes specification successfully.")

    # *************************************************************************
    print("[INFO] Program is about to emit leaflet.")
    emit_leaflet(sys.stdout, classes)
    print("[INFO] Program emitted leaflet successfully.")

    # *************************************************************************
    print("[INFO] Program is about to emit classes-definitions-file.")
    try:
        with open(classes_definitions_file_path, 'w') as classes_definitions_file:
            emit_classes_definitions_file_content(classes_definitions_file, classes_definitions_include, classes_namespace, classes)            
    except IOError as e:
        print("[GLOBAL ERROR] problem with creating classes-definitions-file.", file=sys.stderr)
        print("", file=sys.stderr)
        exit(10)

    print("[INFO] Program emitted classes-definitions-file successfully.")
    # *************************************************************************
    print("[INFO] Program is about to emit fill-functions-definitions-file.")
    try:
        with open(fill_functions_definitions_file_path, 'w') as fill_functions_definitions_file:
            emit_fill_functions_definitions_file_content(fill_functions_definitions_file, fill_functions_definitions_include, classes_namespace, classes)
    except IOError as e:
        print("[GLOBAL ERROR] problem with creating fill-functions-definitions-file.", file=sys.stderr)
        print("", file=sys.stderr)
        exit(11)
    print("[INFO] Program emitted fill-functions-definitions-file successfully.")
