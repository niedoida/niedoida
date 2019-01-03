import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodssvwn631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-svwn-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2063.14780462177, 2)

if __name__ == '__main__':
    unittest.main()
