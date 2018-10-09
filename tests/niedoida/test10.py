import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsub3lypccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test10")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1065.25341125035, 2)

if __name__ == '__main__':
    unittest.main()
