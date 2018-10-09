import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasisDef2SVP(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-basis-def2-svp")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19564.5161188464, 3)

if __name__ == '__main__':
    unittest.main()
