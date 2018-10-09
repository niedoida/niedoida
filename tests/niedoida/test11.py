import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspw91ccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test11")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2079.7858532406, 2)

if __name__ == '__main__':
    unittest.main()
