import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodseh(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-eh")

    def test_energy(self):
        #self.assertAlmostEqual(self.data.scfenergies[0], -162.528819938813, 2)
        pass

if __name__ == '__main__':
    unittest.main()
