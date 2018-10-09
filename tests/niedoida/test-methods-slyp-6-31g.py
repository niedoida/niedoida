import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsslyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-slyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2054.31667351069, 2)

if __name__ == '__main__':
    unittest.main()
