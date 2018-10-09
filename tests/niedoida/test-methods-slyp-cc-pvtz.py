import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsslypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-slyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2056.53725346245, 2)

if __name__ == '__main__':
    unittest.main()
