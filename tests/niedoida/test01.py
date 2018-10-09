import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCase01(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test01")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1045.3832876530, 3)

if __name__ == '__main__':
    unittest.main()
