import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsubecke631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-ubecke-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0],-1058.08630028866, 2)

if __name__ == '__main__':
    unittest.main()
