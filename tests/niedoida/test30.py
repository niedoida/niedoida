import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCase29(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test30")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -30063.5310, 2)

if __name__ == '__main__':
    unittest.main()
