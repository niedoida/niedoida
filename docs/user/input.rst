.. input

Input
=====


Niedoida's input is specified in the `yaml <http://yaml.org>`_ format. An
example of an input file (single-point HF calculations for water molecule in a
6-31g basis set) is shown below::

   # Results from CCCBDB  
   #   (<http://srdata.nist.gov/cccbdb/energy3.asp?method=1&basis=9&charge=0>)
   #       Energy = -75.985359 hartrees
   #       Nuclear repulsion energy = 9.252764 hartrees 
   #

   title: water molecule

   run_type: single_point
   basis_set: 6-31g

   units:
     length: angstrom
     energy: hartree

   atoms: |
     O  0.0000  0.0000  0.1068
     H  0.0000  0.7852 -0.4273
     H  0.0000 -0.7852 -0.4273

Comments
--------

Comments may appear anywhere in the input. Comment lines start with ``#`` sign.



Parameters
----------

Parameters control calculations performed by niedoida. By setting them to
specific values you decide what and how is calculated when the program is run.
Parameters may be of simple, compound or list type. All parameter definitions
have the yaml form ``key: value`` (``key`` and ``value`` fields should be
separated by a colon followed by a space). The order of parameter definitions is
not significant.


Simple parameters
^^^^^^^^^^^^^^^^^

Simple parameter values are numbers or strings.

Examples::

   title: water molecule
   run_type: single_point
   basis_set: 6-31g 
   multiplicity: 1

Sections
^^^^^^^^

Sections are collections of parameters. Section names should be followed by a colon. Section members
should be denoted by whitespace indentation (however tab characters are not allowed as indentation). 
Sections can be nested.


Examples::

   units:
     length: angstrom
     energy: hartree

   scf:
     method: uhf

   properties:
     population_analyses: 
       mulliken: false
       bader: true
     bond_order_analyses:
       mayer: false

.. _atoms:

Atom definitions
----------------

Atoms are defined in one simple parameter named ``atoms``. Atoms ``value`` should contain a list
of atom labels followed by cartesian coordinates. For multiline definition the | character followed by a newline should be used 
at the beginning of the ``value`` field. Multiline atom definition should also be denoted by indentation.

Examples::


   atoms: h 0 0 0

   atoms: |
     O  0.0000  0.0000  0.1068
     H  0.0000  0.7852 -0.4273
     H  0.0000 -0.7852 -0.4273

 
More examples
-------------

1. Unrestricted B3LYP/cc-pVTZ single-point calculations for methylene::

    run_type: single_point
    basis_set: cc-pvtz
    multiplicity: 3
    theory: b3lyp

    scf:
      method: uhf 

    units:
      length: angstrom
      energy: hartree

    atoms: 
    - C     0.000000     0.000000 -0.020583
    - H    -0.828840     0.707900  0.010292
    - H     0.828840     0.707900  0.010292

2. MP2/cc-pVDZ single-point calculations for benzene utilizing density fitting::

    run_type: single_point
    basis_set: cc-pvdz
    posthf_aux_basis_set: cc-pvdz-ri

    units:
      length: bohr
      energy: hartree

    moller_plesset:
        order: 2

    atoms:
    -  C               0.0000000000        2.6229244336        0.0000000000
    -  C               0.0000000000       -2.6229244336        0.0000000000
    -  C               2.2715093956        1.3114565033        0.0000000000
    -  C               2.2715093956       -1.3114565033        0.0000000000
    -  C              -2.2715093956        1.3114565033        0.0000000000
    -  C              -2.2715093956       -1.3114565033        0.0000000000
    -  H               0.0000000000        4.6669106833        0.0000000000
    -  H               0.0000000000       -4.6669106833        0.0000000000
    -  H               4.0416815230        2.3334040232        0.0000000000
    -  H               4.0416815230       -2.3334040232        0.0000000000
    -  H              -4.0416815230        2.3334040232        0.0000000000
    -  H              -4.0416815230       -2.3334040232        0.0000000000

3. Water molecule geometry optimization at the HF/cc-pVDZ level::

    basis_set: cc-pvdz
    theory: hf

    units:
      length: angstrom
      energy: hartree

    atoms: 
    - O 0.0000 0.0000 0.1141
    - H 0.0000 0.7803 -0.4563
    - H 0.0000 -0.7803 -0.4563
