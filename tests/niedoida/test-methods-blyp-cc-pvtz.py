import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsblypccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-blyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2080.06815640214, 2)

if __name__ == '__main__':
    unittest.main()
