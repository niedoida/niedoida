import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsumpw91lypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-umpw91lyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.46497798885, 2)

if __name__ == '__main__':
    unittest.main()
