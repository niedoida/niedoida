import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis6311PlusGStar(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-6-311-plus-g-star")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19576.8633587143, 3)

if __name__ == '__main__':
    unittest.main()
