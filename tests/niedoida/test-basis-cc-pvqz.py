import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisCcpvqz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-cc-pvqz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19579.1894537129, 3)

if __name__ == '__main__':
    unittest.main()
