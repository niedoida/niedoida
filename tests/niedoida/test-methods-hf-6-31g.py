import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodshf631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-hf-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -2067.64453370175, 2)

if __name__ == '__main__':
    unittest.main()
