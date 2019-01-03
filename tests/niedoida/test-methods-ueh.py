import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsueh(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-ueh")

    def test_energy(self):
        # self.assertAlmostEqual(self.data.scfenergies[0], -102.46739328647, 2)
        pass

if __name__ == '__main__':
    unittest.main()
