import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsupw91631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-upw91-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1063.84616319188, 2)

if __name__ == '__main__':
    unittest.main()
