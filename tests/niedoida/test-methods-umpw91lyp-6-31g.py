import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsumpw91lyp631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-umpw91lyp-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1063.72352177855, 2)

if __name__ == '__main__':
    unittest.main()
