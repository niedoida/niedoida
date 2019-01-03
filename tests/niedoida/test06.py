import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsusvwnccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test06")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1054.20855966054, 2)

if __name__ == '__main__':
    unittest.main()
