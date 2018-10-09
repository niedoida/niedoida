import glob
import sys
import unittest

test_file_strings = glob.glob('test*basis*.py')
module_strings = [str[0:len(str)-3] for str in test_file_strings]
suites = [unittest.defaultTestLoader.loadTestsFromName(str) for str in module_strings]
testSuite = unittest.TestSuite(suites)
text_runner = unittest.TextTestRunner(verbosity=2).run(testSuite)
sys.exit(len(text_runner.failures) + len(text_runner.errors))
