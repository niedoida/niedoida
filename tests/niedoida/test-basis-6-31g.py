import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis631G(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19568.9965553466, 3)

if __name__ == '__main__':
    unittest.main()
