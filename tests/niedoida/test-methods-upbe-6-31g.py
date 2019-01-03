import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsupbe631g(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-methods-upbe-6-31g")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -1062.83666611212, 2)

if __name__ == '__main__':
    unittest.main()
