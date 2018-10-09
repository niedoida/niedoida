import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisDef2TZVPP(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-def2-tzvpp")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19578.6480083869, 3)

if __name__ == '__main__':
    unittest.main()
