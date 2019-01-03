import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspbepbeccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-pbepbe-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2078.20669614489, 2)

if __name__ == '__main__':
    unittest.main()
