import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsupw91ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test12")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.52893755627, 1)

if __name__ == '__main__':
    unittest.main()
