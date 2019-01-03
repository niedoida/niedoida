import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspw91ccpvtz(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-pw91-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2079.7858532406, 2)

if __name__ == '__main__':
    unittest.main()
