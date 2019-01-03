import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisDef2SVPD(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-def2-svpd")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19565.4258013079, 3)

if __name__ == '__main__':
    unittest.main()
