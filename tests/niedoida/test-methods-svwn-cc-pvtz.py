import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodssvwnccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-svwn-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2065.30074144725, 2)

if __name__ == '__main__':
    unittest.main()
