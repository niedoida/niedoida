import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCase28(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test28")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -6278.27446624223, 3)

    def test_mp2energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -6299.95709662636, 3)

if __name__ == '__main__':
    unittest.main()
