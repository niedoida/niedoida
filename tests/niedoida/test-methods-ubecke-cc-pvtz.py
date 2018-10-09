import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsubeckeccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-ubecke-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1058.80163655493, 2)

if __name__ == '__main__':
    unittest.main()
