import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisAugCcpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-aug-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19578.5916299357, 3)

if __name__ == '__main__':
    unittest.main()
