import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsmpw91lypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-mpw91lyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2080.00821065815, 2)

if __name__ == '__main__':
    unittest.main()
