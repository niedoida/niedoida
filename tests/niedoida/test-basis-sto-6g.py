import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisSTO6G(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-sto-6g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19505.7470012528, 3)

if __name__ == '__main__':
    unittest.main()
