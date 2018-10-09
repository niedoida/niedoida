import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisSTO2G(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-sto-2g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -18792.6883754809, 3)

if __name__ == '__main__':
    unittest.main()
