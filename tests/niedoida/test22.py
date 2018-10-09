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
                      [28305.90657745,
                       38328.35660662,
                       39700.67118220,
                       42903.79710835,
                       43433.23680387,
                       44058.74013441,
                       47249.08813376,
                       50623.74807872,
                       57944.70438302,
                       59855.59480121])]


if __name__ == '__main__':
    unittest.main()
