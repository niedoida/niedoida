import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsublypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-ublyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.56600747027, 2)

if __name__ == '__main__':
    unittest.main()
