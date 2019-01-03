import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsmpw2plypccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test15")

    def test_energy(self):
        self.assertAlmostEqual(self.data.mpenergies[0][0], -2079.1703, 2)

if __name__ == '__main__':
    unittest.main()
