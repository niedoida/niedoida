import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis6311G(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-6-311g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19571.8876373283, 3)

if __name__ == '__main__':
    unittest.main()
