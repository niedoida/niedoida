import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsb2plypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-b2plyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -2079.2293, 2)

if __name__ == '__main__':
    unittest.main()
