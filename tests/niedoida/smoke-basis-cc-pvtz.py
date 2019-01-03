import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaSmokeCaseBasisCcpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("smoke-basis-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -11879.322318, 3)

if __name__ == '__main__':
    unittest.main()
