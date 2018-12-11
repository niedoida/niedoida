import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaSmokeCaseMethodsRohf(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("smoke-methods-rohf")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1045.0586857695, 3)

if __name__ == '__main__':
    unittest.main()
