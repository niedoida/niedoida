import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisDef2TZVPP(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-def2-tzvpp")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19578.6480083869, 3)

if __name__ == '__main__':
    unittest.main()
