import unittest
from niedoida_test_case import NiedoidaTestCase


class NiedoidaTestCaseTdaB3lyp(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test22")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -10403.1374497064, 3)

    def test_excitation_energies(self):
        [self.assertAlmostEqual(x[0], x[1], 0)
         for x in zip(self.data.etenergies,
                      [28305.9,
                       38284.9,
                       39484.3,
                       43032.3,
                       43326.0,
                       44078.6,
                       47090.6,
                       50298.3,
                       57844.7,
                       59863.4])]


if __name__ == '__main__':
    unittest.main()
