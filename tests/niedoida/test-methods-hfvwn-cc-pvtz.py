import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodshfvwnccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-hfvwn-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2087.68729221901, 2)

if __name__ == '__main__':
    unittest.main()
