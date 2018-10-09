import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis631PlusGStar(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-6-31-plus-g-star")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19574.1544006242, 3)

if __name__ == '__main__':
    unittest.main()
