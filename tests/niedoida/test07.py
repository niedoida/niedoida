import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspbe0ccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test07")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2078.24055781761, 2)

if __name__ == '__main__':
    unittest.main()
