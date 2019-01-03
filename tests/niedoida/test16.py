import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsumpw2plypccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test16")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -1064.1685, 2)

if __name__ == '__main__':
    unittest.main()
