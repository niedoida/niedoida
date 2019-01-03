import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodshfvwn631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-hfvwn-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2085.73920050825, 2)

if __name__ == '__main__':
    unittest.main()
