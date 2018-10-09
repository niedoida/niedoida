import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCase00(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test00")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2056.7986203616, 3)

if __name__ == '__main__':
    unittest.main()
