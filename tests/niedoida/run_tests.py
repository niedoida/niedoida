from argparse import ArgumentParser
from enum import Enum
import glob
import sys
import unittest

class Kind(Enum):
    all = 'all'
    smoke = 'smoke'
    test = 'test'

    def __str__(self):
        return self.value

class Group(Enum):
    all = 'all'
    basis = 'basis'
    methods = 'methods'

    def __str__(self):
        return self.value

parser = ArgumentParser(description='niedoida test driver')
parser.add_argument('niedoida', type=str, help='path to the binary to test')
parser.add_argument('-k', '--kind', type=Kind, default=Kind.smoke, choices=list(Kind))
parser.add_argument('-g', '--group', type=Group, default=Group.all, choices=list(Group))
parser.add_argument('-t', '--test', type=str, default='all', help='test name')

args = parser.parse_args()

pattern = ''
if args.kind.name == 'all':
    pattern += '*'
else:
    pattern += args.kind.name

pattern += '-'

if args.group.name == 'all':
    pattern += '*'
else:
    pattern += args.group.name

pattern += '-'

if args.test == 'all':
    pattern += '*'
else:
    pattern += args.test

test_file_strings = glob.glob(pattern + '.py')
module_strings = [str[0:len(str)-3] for str in test_file_strings]
suites = [unittest.defaultTestLoader.loadTestsFromName(str) for str in module_strings]
testSuite = unittest.TestSuite(suites)
text_runner = unittest.TextTestRunner(verbosity=2).run(testSuite)
sys.exit(len(text_runner.failures) + len(text_runner.errors))
