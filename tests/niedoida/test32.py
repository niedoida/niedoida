import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCase32(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test32")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -152.929429665 * 27.21139613182, 2)

if __name__ == '__main__':
    unittest.main()
