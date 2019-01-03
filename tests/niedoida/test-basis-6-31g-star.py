import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis631GStar(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-6-31g-star")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19573.7570681511, 3)

if __name__ == '__main__':
    unittest.main()
