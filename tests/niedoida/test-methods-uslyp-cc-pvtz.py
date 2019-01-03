import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsuslypccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-uslyp-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1047.43792742831, 2)

if __name__ == '__main__':
    unittest.main()
