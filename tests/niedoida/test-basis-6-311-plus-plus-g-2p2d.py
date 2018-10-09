import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis6311PlusPlusG2p2d(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-6-311-plus-plus-g-2p2d")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19577.8116098847, 3)

if __name__ == '__main__':
    unittest.main()
