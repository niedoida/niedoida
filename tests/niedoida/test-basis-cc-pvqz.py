import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisCcpvqz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-cc-pvqz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19579.1894537129, 3)

if __name__ == '__main__':
    unittest.main()
