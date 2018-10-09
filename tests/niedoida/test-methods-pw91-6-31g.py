import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspw91631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-pw91-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2077.76729848235, 2)

if __name__ == '__main__':
    unittest.main()
