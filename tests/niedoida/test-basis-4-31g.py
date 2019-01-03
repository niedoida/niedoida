import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis431G(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-4-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19548.611470736,3)

if __name__ == '__main__':
    unittest.main()
