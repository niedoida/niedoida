import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsuslyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-uslyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1046.6329379523, 2)

if __name__ == '__main__':
    unittest.main()
