import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodshfccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-hf-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2069.59455748339, 2)

if __name__ == '__main__':
    unittest.main()
