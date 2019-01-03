import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsuhfccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-uhf-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1058.97636912979, 2)

if __name__ == '__main__':
    unittest.main()
