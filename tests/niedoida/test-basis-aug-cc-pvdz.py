import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisAugCcpvdz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-aug-cc-pvdz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19576.2127149187, 3)

if __name__ == '__main__':
    unittest.main()
