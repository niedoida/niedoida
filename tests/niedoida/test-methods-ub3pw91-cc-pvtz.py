import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsub3pw91ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-ub3pw91-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.86530797823, 2)

if __name__ == '__main__':
    unittest.main()
