import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsublyp631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-ublyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1063.84109766477, 2)

if __name__ == '__main__':
    unittest.main()
