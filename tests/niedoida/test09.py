import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsb3lypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test09")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2080.56942990128, 2)

if __name__ == '__main__':
    unittest.main()
