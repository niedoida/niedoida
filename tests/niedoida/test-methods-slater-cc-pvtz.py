import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsslaterccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-slater-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2047.2781348278, 2)

if __name__ == '__main__':
    unittest.main()
