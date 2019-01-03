import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseOptsvwn(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test19")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2064.12965476617, 2)

if __name__ == '__main__':
    unittest.main()
