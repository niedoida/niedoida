import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis321G(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-3-21g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19472.0736364848, 3)

if __name__ == '__main__':
    unittest.main()
