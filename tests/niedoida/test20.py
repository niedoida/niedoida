import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseOpthf(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test20")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2068.80138245311, 2)

if __name__ == '__main__':
    unittest.main()
