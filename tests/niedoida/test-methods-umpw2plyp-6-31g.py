import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsumpw2plyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-umpw2plyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -1062.8617, 2)

if __name__ == '__main__':
    unittest.main()
