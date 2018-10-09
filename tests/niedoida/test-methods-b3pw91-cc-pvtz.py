import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsb3pw91ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-b3pw91-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2079.77395692127, 2)

if __name__ == '__main__':
    unittest.main()
