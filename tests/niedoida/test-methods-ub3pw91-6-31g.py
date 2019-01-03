import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsub3pw91631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-ub3pw91-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.20739432112, 2)

if __name__ == '__main__':
    unittest.main()
