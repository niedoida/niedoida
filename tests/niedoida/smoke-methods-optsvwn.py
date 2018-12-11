import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaSmokeCaseMethodsOptsvwn(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("smoke-methods-optsvwn")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2064.12965476617, 2)

if __name__ == '__main__':
    unittest.main()
