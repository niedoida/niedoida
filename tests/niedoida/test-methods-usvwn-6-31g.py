import unittest
from niedoida_test_case import NiedoidaTestCase

class NiedoidaTestCaseMethodsusvwn631g(NiedoidaTestCase):

    def setUp(self):
        self.data = self.run_calculations("test-methods-usvwn-6-31g")

        self.assertAlmostEqual(self.data.scfenergies[0], -1053.44795224653, 2)

if __name__ == '__main__':
    unittest.main()
