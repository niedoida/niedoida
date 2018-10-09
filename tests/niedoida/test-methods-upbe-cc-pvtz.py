import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsupbeccpvtz(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-upbe-cc-pvtz")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1063.50904447046, 2)

if __name__ == '__main__':
    unittest.main()
