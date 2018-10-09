import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsumpw91ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-umpw91-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.93648575722, 2)

if __name__ == '__main__':
    unittest.main()
