import subprocess
import unittest
import logging
import os
from cclib.parser import ccopen

class NiedoidaTestCase(unittest.TestCase):

    NIEDOIDA = './niedoida'

    @classmethod
    def run_calculations(cls, fname):

        inp_fname = fname + '.inp'
        log_fname = fname + '.log'

        print('setting up ' +  cls.__name__)

        if 'NUMBER_OF_PROCESSORS' in os.environ:
            subprocess.check_call([cls.NIEDOIDA, '--no-cores=' + os.environ['NUMBER_OF_PROCESSORS'], inp_fname])
        else:
            subprocess.check_call([cls.NIEDOIDA, inp_fname])

        log = ccopen(log_fname)
        log.logger.setLevel(logging.WARNING)
        return log.parse()
