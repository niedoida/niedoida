import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseBasis6311GStar(NiedoidaTestCase):

    @classmethod
    def setUpClass(cls):
        cls.data = cls.run_calculations("test-basis-6-311g-star")

    def test_energy(self):
        self.assertAlmostEqual(self.data.scfenergies[0], -19576.5629009469, 3)

if __name__ == '__main__':
    unittest.main()
