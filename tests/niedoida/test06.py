import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsusvwnccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test06")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1054.20855966054, 2)

if __name__ == '__main__':
    unittest.main()
