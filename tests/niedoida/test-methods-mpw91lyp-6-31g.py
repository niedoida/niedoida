import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsmpw91lyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-mpw91lyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2077.94219667386, 2)

if __name__ == '__main__':
    unittest.main()
