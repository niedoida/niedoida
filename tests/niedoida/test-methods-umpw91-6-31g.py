import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsumpw91631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-umpw91-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1064.26315429021, 2)

if __name__ == '__main__':
    unittest.main()
