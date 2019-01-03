import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsub2plyp631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-ub2plyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -1062.8386, 2)

if __name__ == '__main__':
    unittest.main()
