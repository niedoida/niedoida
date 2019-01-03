import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsbecke631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-becke-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2068.78886237537, 2)

if __name__ == '__main__':
    unittest.main()
