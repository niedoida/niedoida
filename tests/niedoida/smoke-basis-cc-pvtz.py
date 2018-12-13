import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaSmokeCaseBasisCcpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("smoke-basis-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -11879.322318, 3)

if __name__ == '__main__':
    unittest.main()
