import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaSmokeCaseMethodsRhf(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("smoke-methods-rhf")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2056.7986203616, 3)

if __name__ == '__main__':
    unittest.main()
