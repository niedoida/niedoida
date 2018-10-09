import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCase24(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test24")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -6278.27446624223, 3)

    def test_mp2energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -6299.95959626414, 3)

if __name__ == '__main__':
    unittest.main()
