import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaSmokeCaseBasis631PlusPlusGStarStar(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("smoke-basis-6-31-plus-plus-g-star-star")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19574.7203560605, 3)

if __name__ == '__main__':
    unittest.main()
