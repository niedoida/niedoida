import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsmpw91ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-mpw91-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2080.26918909848, 2)

if __name__ == '__main__':
    unittest.main()
