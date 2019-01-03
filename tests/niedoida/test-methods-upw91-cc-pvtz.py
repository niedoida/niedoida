import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsupw91ccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-upw91-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.52893755627, 1)

if __name__ == '__main__':
    unittest.main()
