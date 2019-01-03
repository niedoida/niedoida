import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsub2plypccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-ub2plyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -1064.1915, 2)

if __name__ == '__main__':
    unittest.main()
