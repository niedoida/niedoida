import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspbepbe631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-pbepbe-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2076.20706655081, 2)

if __name__ == '__main__':
    unittest.main()
