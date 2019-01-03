import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis321G(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-3-21g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19472.0736364848, 3)

if __name__ == '__main__':
    unittest.main()
