import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsupbe0ccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test08")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1063.79698147432, 2)

if __name__ == '__main__':
    unittest.main()
