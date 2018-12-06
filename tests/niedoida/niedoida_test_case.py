import subprocess
import unittest
import logging
import os
from cclib.parser import ccopen

class NiedoidaTestCase(unittest.TestCase):

    def run_calculations(self, fname):
        if os.name == 'nt':
            niedoida = 'niedoida.exe'
        else:
            niedoida = './niedoida'
        
        inp_fname = fname + '.inp'
        log_fname = fname + '.log'

        if 'NUMBER_OF_PROCESSORS' in os.environ:
            subprocess.check_call([niedoida, '--no-cores=' + os.environ['NUMBER_OF_PROCESSORS'], inp_fname])
        else:
            subprocess.check_call([niedoida, inp_fname])

        log = ccopen(log_fname)
        log.logger.setLevel(logging.WARNING)
        return log.parse()
