import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodspbe0631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-pbe0-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2076.28078900787, 2)

if __name__ == '__main__':
    unittest.main()
