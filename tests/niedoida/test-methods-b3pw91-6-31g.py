import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsb3pw91631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-b3pw91-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2077.81533984971, 2)

if __name__ == '__main__':
    unittest.main()
