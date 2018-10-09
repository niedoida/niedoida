import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsuslaterccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-uslater-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1041.66340091135, 2)

if __name__ == '__main__':
    unittest.main()
