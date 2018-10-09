import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisCcpvdz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-cc-pvdz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19575.3360813912, 3)

if __name__ == '__main__':
    unittest.main()
