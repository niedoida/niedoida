import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisDef2TZVP(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-def2-tzvp")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19578.5243361819, 3)

if __name__ == '__main__':
    unittest.main()
