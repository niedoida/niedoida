import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodshfccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-hf-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2069.59455748339, 2)

if __name__ == '__main__':
    unittest.main()
