import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseCisH2O(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test23")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2067.51421267621, 3)

    def test_excitation_energies(self):
        [self.assertAlmostEqual(x[0], x[1], 1)
         for x in zip(self.data.etenergies,
                      [65101.7045070346,
                       72996.9034551732,
                       79934.4716798115,
                       82187.5633763715,
                       87706.7952037116,
                       92277.5185189875,
                       94701.6400051006,
                       105573.8315735919,
                       110205.6086407433,
                       118155.0529727149])]


if __name__ == '__main__':
    unittest.main()
