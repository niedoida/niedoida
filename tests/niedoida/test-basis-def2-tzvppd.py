import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisDef2TZVPPD(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-def2-tzvppd")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19578.7153383319, 3)

if __name__ == '__main__':
    unittest.main()
