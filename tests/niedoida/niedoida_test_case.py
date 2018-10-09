import subprocess
import unittest
import logging
from cclib.parser import ccopen

class NiedoidaTestCase(unittest.TestCase):

    def run_calculations(self, fname):
        niedoida = "./niedoida"
        
        inp_fname = fname + ".inp"
        log_fname = fname + ".log"

        subprocess.check_call([niedoida, inp_fname])
        log = ccopen(log_fname)
        log.logger.setLevel(logging.WARNING)
        return log.parse()
