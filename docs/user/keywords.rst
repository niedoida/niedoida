.. keywords


List of keywords
================

General
^^^^^^^

.. yml:item:: title:name

   Sets the title of the job to *name*.
..   :arg str text: to jest tekst.


.. yml:item:: theory:name

   Sets the theory or exchange-correlation functional to be used. Possible theories are:

   * *hf* (default) - Hartree-Fock method
   * *hfvwn* - HFVWN method, combination of HF exchange with Vosko, Wilk and Nusair correlation functional (VWN) :cite:`vosko1980:accurate_spin_dependent`
   * *slater* - Slater exchange functional :cite:`slater1951`
   * *svwn* - combination of Slater exchange functional :cite:`slater1951` with the VWN (Vosko, Wilk, and Nusair) correlation functional :cite:`vosko1980:accurate_spin_dependent`
   * *slyp* - combination of Slater exchange functional :cite:`slater1951` with the correlation functional of Lee, Yang, and Parr :cite:`lee1988`
   * *becke* - Becke’s 1988 exchange functional :cite:`becke1988:density-functional_exchange-energy_approximation`
   * *blyp* - combination of Becke’s 1988 exchange functional :cite:`becke1988:density-functional_exchange-energy_approximation` with the correlation functional of Lee, Yang, and Parr (LYP) :cite:`lee1988`
   * *pw91* - Perdew and Wang’s 1991 exchange-correlation fuctional :cite:`perdew1991,perdew1992`
   * *pbe* - The 1996 functional of Perdew, Burke and Ernzerhof :cite:`perdew1996`
   * *b3lyp* - Becke 3 parameter hybrid functional, combination of Becke’s 1988 exchange functional, VWN functional for local correlation and LYP functional for non-local correlation :cite:`becke1993:density-functional_thermochemistry,stephens1994`
   * *pbe0* - The 1996 functional of Perdew, Burke and Ernzerhof, as made into a hybrid by Adamo :cite:`adamo1999`
   * *mpw91* - modified Perdew and Wang’s exchange functional :cite:`adamo1998` with pw91 correlation functional :cite:`perdew1991,perdew1992`
   * *mpw91lyp* -  modified Perdew and Wang’s exchange functional :cite:`adamo1998` with the correlation functional of Lee, Yang, and Parr (LYP) :cite:`lee1988`
   * *mb3lyp* - B3LYP functional, as modified by Tognetti :cite:`tognetti2007`
   * *b3lyp5* - B3LYP functional with the VWN5 functional for local correlation :cite:`becke1993:density-functional_thermochemistry,stephens1994,vosko1980:accurate_spin_dependent`
   * *b3pw91* - Becke 3 parameter hybrid functional with Perdew and Wang’s 1991 functional for non-local correlation (combination of Becke’s 1988 exchange functional, VWN functional for local correlation and Perdew and Wang’s 1991 functional for non-local correlation)
   * *b2plyp* - combination of Becke's :cite:`becke1988:density-functional_exchange-energy_approximation` and HF exchange with the correlation functional of Lee, Yang, and Parr (LYP) :cite:`lee1988` and a perturbative second order part (MP2) :cite:`grimme2006`
   * *mpw2plyp* - combination of modified Perdew and Wang's exchange :cite:`adamo1998`, HF exchange, correlation of Lee, Yang, and Parr :cite:`lee1988` and a perturbative second order part (MP2) :cite:`schwabe2006`
   * *eh* - extended Hückel method

.. yml:item:: dispersion:name

   Specifies whether to use additional dispersion correction. Possible *name* values are:

   * *none* (default) - no additional dispersion correction
   * *d3* - Grimme's D3 dispersion correction :cite:`grimme2010`

.. yml:item:: run_type:name

   Specifies the type of calculation to be done. Possible *name* values are:

   * *single_point* (default) - single point calculations for a given geometry
   * *geometry_optimization* - geometry optimization

.. .. yml:item:: symmetry_group:name
.. symetria nie istnieje

.. yml:item:: charge:value

   Total charge of the system. Default *value* is *0*. 

.. yml:item:: multiplicity:value

   The multiplicity of the system. Default *value* is *1*.

.. yml:item:: basis_set:name

   Specifies name of the basis set to be used in calculations. All standard basis sets are
   available. Full list of defined basis sets is specified in the :ref:`basis sets <basis-sets>` section.
   Additional basis sets can be defined by user in a gaussian (g94) or molcas format.

   * *sto-3g* (default)


.. yml:item:: aux_basis_set:name

   Specifies name of a basis set used during density fitting process. If not specified 
   no density fitting is performed.

.. yml:item:: posthf_aux_basis_set:name

   Specifies name of a basis set used during density fitting process during posthf calculations.
   If not specified no density fitting is performed.

.. .. yml:item:: poisson_basis_set:name

..   Specifies name of a basis set used during MP2 
..   jw + MP2 poisson

.. yml:item:: external_electric_field:x_value y_value z_value

   Defines values of the external electric field vector. Default is 0 0 0.
   
..  .. todo:: czy to nie powinno byc przerobione na tablice?

.. yml:item:: atoms:list

   Specifies list of atoms and its coordinates. For more information see section :ref:`input <atoms>`.


.. yml:section:: units:

   This section controls various units in input and output files.

   .. yml:item:: energy:name

      Specifies energy units. Posible units are:

      * *hartree* (default)
      * *eV*

   .. yml:item:: length:name

      Specifies length (distance) units. Posible units are:

      * *angstrom*
      * *bohr* (default)

   .. yml:item:: storage:name

      Specifies storage units. Posible units are:

      * *byte*
      * *kilobyte*
      * *megabyte* (default)
      * *gigabyte*


.. yml:section:: limits:
    
   This section specifies system resources available during computations.

   .. yml:item:: cpu_time:value

      Maximal CPU time in seconds, default *value* is *604 800* (7 days). 


SCF
^^^

.. yml:section:: scf:

   Section consists of keywords controlling SCF calculations.

   .. yml:item:: method:name

      * *rhf* (default) - restricted Hartree-Fock
      * *rohf* - restricted open-shell Hartree-Fock (Longuet-Higgins and Pople approximation :cite:`longuet-higgins1955:electronic_spectra_aromatic`)
      * *uhf* - unrestricted Hartree-Fock
      * *prhf* - direct energy minimization with respect to density matrix :cite:`helgaker2000`

   .. yml:item:: initial_guess:name

      Specifies the initial guess for the Hartree-Fock wavefunction? 

      * *core_hamiltonian* - initial guess constructed from core hamiltonian
      * *fragments* (default) - initial guess constructed from promolecular fragments
      * *from_file* - initial guess read from file (filename will be read from :yml:item:`initial_guess_filename`)
      
   .. yml:item:: initial_guess_filename:name

      Name of a file containing initial guess in the `HDF5 <https://www.hdfgroup.org/HDF5/>`_ format.
      File can be generated by :yml:item:`binary` option in :yml:section:`output` section.


   .. yml:item:: convergence_accelerator:name

      Specifies whether to use convergence acceleration during the SCF

      * *none* - no convergence acceleration
      * *diis* (default) - use Pulay’s direct inversion in the iterative subspace :cite:`pulay1982`.
   
   .. yml:item:: max_no_iterations:value

      Specifies maximum number of SCF iterations. Default *value* is *50*.

   .. yml:item:: energy_threshold:value

      Sets the SCF convergence criterion to energy change lower than a *value*. Default *value* is 1e-6 (0.000001).

   .. yml:item:: density_threshold:value

      Sets the SCF convergence criterion to density? change lower than a *value*. Default *value* is 1e-6 (0.000001).

   .. yml:item:: occupations:name

      Specifies the way to determine orbital occupations during SCF calculations. Valid *names* are:

      * *aufbau* (default) - filling orbitals with respect to Aufbau principle
      * *fermi* - filling orbitals with respect to Fermi-Dirac distribution
      * *maximum_overlap* - filling orbitals most similar to the ones which were occupied in the previous SCF cycle

   .. yml:item:: degeneracy_threshold:value

      Used only when :yml:item:`occupations` is set to *aufbau*. Electrons are distributed equally between
      all orbitals, which energy differs from HOMO by less than *value*. When not set occupations are 
      allways a whole number.
 
   .. yml:item:: smear:value

      Used only when :yml:item:`occupations` is set to *fermi*. 
      Then electrons are distributed with respect to the Fermi-Dirac statistics with :math:`kT=value`. 
      Fermi level is set to :math:`(E_{HOMO} + E_{LUMO})/2`. The default *value* is *0.001*.

   .. .. yml:item:: symmetry:name

      none (default)
      simple

   .. yml:item:: shift_1:value
      
      This keyword controlls level shifting. *value* is a positive number. In RHF and PRHF calculations 
      sets a gap size between virtual and occupied orbitals, in ROHF between single-occupied
      and double-occupied orbitals and in UHF between virtual and occupied orbitals for spin α. 

   .. yml:item:: shift_2:value

      Used only during UHF calculations. Sets a gap size between virtual and occupied orbitals for spin β. 

   .. yml:item:: threshold_linear_independence:value

      Threshold for elimination of (quasi)linear dependence from the basis set. Default *value* is *0*.      

.. .. yml:section:: cdft:

   .. yml:item:: population_type:name

      lowdin
      becke

   .. yml:item:: atomic_weights_alpha:

   .. yml:item:: atomic_weights_beta:

   .. yml:item:: constrained_value:

   .. yml:item:: initial_multiplier:

Geometry optimization
^^^^^^^^^^^^^^^^^^^^^



.. yml:section:: geometry_optimization:

   This section specifies parameters controlling the geometry optimization process.

   .. yml:item:: method:name

      Method to be used during geometry optimization. Valid *name* values are:

      * *nm* (default) - Nelder-Mead method (also known as downhill simplex method) :cite:`Nelder1965`
      * *lmvm* - limited memory variable metric method (as introduced in `TAO <http://www.mcs.anl.gov/project/tao-toolkit-advanced-optimization>`_ toolkit)
 
   .. yml:item:: coords:name

      Coordinates used during the geometry optimization. Valid *name* values are:

      * *cartesian* (default) - optimization process performed in cartesian coordinates
      * *delocalised_internal* - optimization process performed in delocalised internal coordinates :cite:`baker1996:delocalized_internal_coordinates`

   .. yml:item:: threshold:value

      Convergence criterium for geometry optimization. Default *value* is *1e-5*.

   .. yml:item:: max_no_steps:value

      Maximal number of steps during the optimization. Default *value* is *100*.


Integration params
^^^^^^^^^^^^^^^^^^

.. yml:section:: integration_params:

   Set of integration parameters.

   .. yml:item:: engine:name

      Determins which engine is to be used for integration. Valid *name* values are:

      * *naive* - reference implementation, very slow, not to be used for production runs
      * *os1* (default) Obara-Saika scheme 

   .. yml:item:: threshold:value

      Maximum value of integration error. Default *value* is *1e-11*.

   .. yml:item:: cache_size:value
     
      Cache size used for two-electron integrals. Default *value* is *64*.

   .. yml:item:: aux_cache_size:value

      Cache size used during density fitting. Default *value* is *64*.

   .. yml:item:: storage:name
 
      Describes the method of integrals storing. Valid *name* values are:

      * *none* (default) - direct calculations (integrals are not stored and are recalculated when needed)
      * *local* - all integrals are stored on a disk; during MPI calculations every process has its own copy
      * *shared* - all integrals are stored on a disk; during MPI calculations file containg itegrals is shared by all processes
      * *in_core* - all integrals are stored in RAM (uses excessive amount of memory, viable only for small systems)

Møller-Plesset
^^^^^^^^^^^^^^

.. yml:section:: moller_plesset:
   
   In this sections parameters controlling Møller-Plesset method are specified.

   .. yml:item:: order:logical_value

      Sets an order of perturbation to a *logical_value*. The default *logical_value* is *0* (no perturbation analysis). At the moment only *0* and *2* are valid options.

   .. yml:item:: dipole_moment:logical_value

      Specifies if dipole moment is calculated. Default *logical_value* is *false*.

   .. yml:item:: degeneracy_corrected:logical_value

      If *true* then DCPT2 (near-degeneracy corrected second-order perturbation theory) energy expression 
      is applied instead of standard MP2 expression :cite:`assfeld1995`. The default *logical_value* is *false* meaning standard MP2 expression.

   .. yml:item:: memory_pool:value

      Maximal amount of memory to be used (in MB). Default *value* is *256*.

   .. yml:item:: no_frozen:value

      Specifies number of frozen molecular orbitals (removed from correlation window). Default *value* is *0*.
 
   .. yml:item:: no_deleted:value

      Number of omitted virtual orbitals. Default value is *0*.

   .. yml:item:: no_frozen_beta:value

      Number of frozen beta manifold occupied orbitals (relevant only for unrestricted case). Default *value* is *0*.

   .. yml:item:: no_deleted_beta:value

      Number of omitted beta virtual orbitals (relevant only for unrestricted case). Default value is *0*.

   .. yml:item:: type:name
      
      Sets type of calculations. Valid *name* values are:

      * *conventional* - reference, but very slow implementation of conventional MP2 (restricted case only)
      * *imp* - quite efficient implementation of conventional MP2 (restricted case only)
      * *minmem* - most efficient implementation of conventional MP2 (restricted and unrestricted case)
      * *sec_imp* (default) - slow, but the least memory-demanding implementation of conventional MP2 (restricted case only)
      * *laplace_mo* - LT-MP2 in MO basis, only for reference (restricted case only)
      * *laplace_ao* - LT-MP2 in AO basis (restricted case only)
      * *laplace_ao_ls* - LT-MP2 in AO basis with somehow improved scaling of memory and time requirements (restricted case only)
 
     .. * *laplace_cholesky_df* -

   .. yml:item:: quadrature:name

      Type of quadrature used in LT-MP2, possible values are:
 
      * *fitted_simple*
      * *fitted_normalized*
      * *em_static* (default)
      * *em_simple*
      * *em_normalized*

   .. yml:item:: no_points:value

      Number of points for quadrature used in LT-MP2. Default *value* is *10*.

   .. yml:item:: eps:value

      Cutoff for prescreening small contributions. Default *value* is *1e-8*.

Excited states
^^^^^^^^^^^^^^

.. yml:section:: td:

   This section decribes parameters controlling time dependent calculations.

   .. yml:item:: type:name

      Type of time dependent calculations. Possible *name* values are:  

      * *none* (default)
      * *tda* - Tamm-Dancoff approximation (in HF calculations results in CIS method)
      * *rpa* - random phase approximation 

      .. .. todo:: jest default *none* a nie ma mozliwosci zdefiniowania takiej wartosci w inpucie


   .. yml:item:: multiplicity:value

      If *value* is set to *1* performs calculations only for singlets, *2* results in calculation only for triplets, *3* results
      in calculations for singlets and triplets.
      Default *value* is *3*.


   .. yml:item:: no_frozen:value

      Number of frozen (core) orbitals. Default *value* is *0*.

   .. yml:item:: no_deleted:value

      Number of omitted virtual orbitals. Default *value* is *0*.

   .. yml:item:: no_states:value

      Requested number of states. Default *value* is *0*.

   .. yml:item:: no_roots:value

      Dimension of Davidson diagonalization subspace. Default *value* is :math:`2 \cdot`:yml:item:`no_states`. 

   .. yml:item:: no_iterations:value

      Maximum number of Davidson diagonalization iterations. Default *value* is *50*.

   .. yml:item:: diagonalization_threshold:value

      Davidson diagonalization threshold. Default *value* is *1e-4* (Hartree).

   .. yml:item:: integral_threshold:value

      Maximum value of integration error. Default *value* is *1e-10*.

   .. yml:item:: dress_davidson_threshold:value

      Davidson diagonalization threshold during dressing iterations. Default *value* is *1e-3* (Hartree).

   .. yml:item:: dress_delta_energy:value

      Energy window to scan for doubly excited configurations suitable for dressing. Default *value* is *0.2* (Hartree). 

   .. yml:item:: max_no_dressing_iterations:value

      Maximum number of dressing iterations. *0* means that dressing is disabled. Default *value* is *0*.

   .. yml:item:: max_no_davidson_dressing_iterations:value

      Maximum number of Davidson diagonalization iterations during dressing iteration. Default *value* is the same as actual *value* of :yml:item:`no_iterations`.

   .. yml:item:: dress_state:value

      Number of the state to dress. Only states having non-negligible admixture of doubly excited configuration are counted. 
      Default *value* is *1* (dress the lowest state interacting with doubly excited configuration).

Properties
^^^^^^^^^^

.. yml:section:: properties:

   This section specifies which additional properties of analysed system should be computed.

   .. yml:item:: max_multipole_moment_order:value

      Maximum multipole moment order to be calculated.  

   .. yml:section:: population_analyses:

      Set of parameters controlling population analyses. 

      .. yml:item:: mulliken:logical_value

         Mulliken population analysis :cite:`mulliken1955:electronic_population_analysis1`
         :cite:`mulliken1955:electronic_population_analysis2` :cite:`mulliken1955:electronic_population_analysis3` 
         :cite:`mulliken1955:electronic_population_analysis4` (default *logical_value* is *true*)
   
      .. yml:item:: lowdin:logical_value

         Löwdin population analysis (default *logical_value* is *true*).

      .. yml:item:: hirshfeld:logical_value

         Hirshweld population analysis (default *logical_value* is *false*).

      .. yml:item:: voronoi:logical_value

         Voronoi population analysis (default *logical_value* is *false*).

      .. yml:item:: bader:logical_value

         Bader population analysis (default *logical_value* is *false*).


   .. yml:section:: bond_order_analyses:

      Set of parameters controlling bond order analyses. 

      .. yml:item:: mayer:logical_value

         Mayer bond order analysis :cite:`mayer1986:bond_orders_valences` 
         :cite:`mayer1983:charge_bond_order` (default *logical_value* is *true*).

      .. yml:item:: gopinathan_jug:logical_value

         Gopinathan-Jug bond order analysis :cite:`Gopinathan1983` (default *logical_value* is *true*).

      .. yml:item:: nalewajski:logical_value

         Nalewajski-Mrozek bond order analysis :cite:`nalewajski1994:modified_valence_indices`
         :cite:`nalewajski1996:quantum_chemical_valence`  :cite:`mrozek1998:exploring_bonding_patterns` (default *logical_value* is *true*).


   .. yml:section:: orbital_localization:

      .. yml:item:: cholesky:logical_value

         If enabled perform Cholesky decomposition-based orbital localization. Default *logical_value* is *false*.

   .. yml:section:: electric

      Set of parameters controlling electric properties.  

      .. yml:item:: polarizability:logical_value

         If enabled calculate polarizability of the system. Default *logical_value* is *false*.

      .. .. yml:item:: polarizability_DCPHF:logical_value

         false (default)

      .. yml:item:: hyperpolarizability:logical_value

         If enabled calculate hyperpolarizability of the system. Default *logical_value* is *false*.

      .. .. yml:item:: atom_atom_N_mulliken:logical_value

         false (default)

      .. .. yml:item:: atom_atom_N_lowdin:logical_value

         false (default)

      .. .. yml:item:: atom_atom_4N_mulliken:logical_value

         false (default)

      .. .. yml:item:: atom_atom_4N_lowdin:logical_value

         false (default)

      .. .. yml:item:: atom_atom_10N_mulliken:logical_value

         false (default)

      .. .. yml:item:: atom_atom_10N_lowdin:logical_value

         false (default)

      .. .. yml:item:: only_sos:logical_value
         
         false (default)

      .. .. yml:item:: create_files:logical_value

         false (default)

Output
^^^^^^

.. yml:section:: output:

   In this section additional output format can be specified. 
  
   .. yml:item:: binary:logical_value

      Specifies if binary output is generated (which can be used as a initial guess :yml:item:`initial_guess` file in order to restart calculations). Default *logical_value* is *false*.

   .. yml:item:: molden:logical_value

      When *logical_value* is set to *true* output readable by `MOLDEN <http://www.cmbi.ru.nl/molden/>`_ is generated. Default *logical_value* is *false*.

Grid
^^^^

.. yml:section:: grid:

   Specifies the integration grid to be used for numerical integrations in DFT.

   .. yml:item:: type:name

      Type of grid to be used during calculations. Valid *name* values are:

      * *simple* - simple grid (radial shells with equal number of angular points)
      * *pruned* - simple grid modified with the vicinity of atomic nucleus (less angular points in this area)
      * *angular_s_adaptive* - adaptive angular grid designed to reproduce S matrix
      * *angular_rho0_adaptive* (default) - adaptive angular grid designed to reproduce density of promolecule
      * *angular_vxc0_adaptive* - adaptive angular grid designed to reproduce exchange-correlation potential of promolecule
      * *full_rho0_adaptive* - full adaptive grid (angular and radial) designed to reproduce density of promolecule

   .. yml:item:: angular:name

      Specifies type of angular mapping on grid. Valid *name* values are:

      * *gauss_legendre* - Gauss-Legendre quadrature 
      * *lebedev_laikov* (default) - Lebedev-Laikov quadrature

   .. yml:item:: radial_mapping:name

      Specifies type of radial mapping on grid. Valid *name* values are:

      * *logm* (default)
      * *koester*

   ..    .. todo:: znowu nie ma defaulta..

   .. yml:item:: accuracy:value

      Minimal accuracy requested during grid adaptation. Default *value* is *1e-6*

   .. yml:item:: max_no_radial_points:value

      Maximal number of radial shells on grid. Default *value* is *75*.

   .. yml:item:: max_no_angular_points:value

      Maximal number of angular points on a shell. Default *value* is *1500*.

   .. yml:item:: cache_size:value

      Cache size used for storing function values on grid. Default *value* is *64*.

.. .. todo:: co to jest tol_dist (default = 5e-3)

.. .. todo:: czy pola secondary_scf:basis_set oraz scf:mo_transpose_alpha scf:mo_transpose_beta sa uzywane czy nie
