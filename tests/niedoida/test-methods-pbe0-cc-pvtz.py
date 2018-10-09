import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspbe0ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-pbe0-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2078.24055781761, 2)

if __name__ == '__main__':
    unittest.main()
