import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsb3lyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-b3lyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2078.56712752882, 2)

if __name__ == '__main__':
    unittest.main()
