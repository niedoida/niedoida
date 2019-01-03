import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis6311PlusPlusG3df3pd(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-6-311-plus-plus-g-3df3pd")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19578.3102669411, 3)

if __name__ == '__main__':
    unittest.main()
