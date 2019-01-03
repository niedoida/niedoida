import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisSTO3G(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-sto-3g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19340.5496087281, 3)

if __name__ == '__main__':
    unittest.main()
