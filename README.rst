========
niedoida
========

.. image:: https://readthedocs.org/projects/niedoida/badge/?version=latest
    :target: https://niedoida.readthedocs.io/en/latest/?badge=latest

.. image:: https://ci.appveyor.com/api/projects/status/ps5s0mq5yhgmpqfn?svg=true
    :target: https://ci.appveyor.com/project/grzegorzmazur/niedoida-p7j0m


Niedoida is a general-purpose quantum-chemical and microelectrostatic package.
See http://www.niedoida.org for details.

License
-------

Copyright © 2005-2018 Jagiellonian University

Niedoida is subject to the terms of the Mozilla Public License, v. 2.0. If a
copy of the MPL was not distributed with this file, you can obtain one at
http://mozilla.org/MPL/2.0/.

Citation
--------

When you publish results that were obtained using niedoida, you are required to
include references to the program

  niedoida 18.10, http://www.niedoida.org

and the following publication:

  Grzegorz Mazur, Marcin Makowski, *Development and Optimization of
  Computational Chemistry Algorithms*, Computing and Informatics,
  28 (2009) 115.

Installation from sources
-------------------------

Linux
~~~~~

1. Prerequisites:

  a) GCC version 4.8 or newer
  b) Sphinx 1.6.7 or newer (optional, required for building documentation)

2. Download and unpack niedoida
3. Open ``Terminal`` window
4. Change directory to the niedoida source directory
5. Execute

  .. code-block:: bash

     ./build_external_packages
     mkdir build
     cd build
     ../external_packages/bin/cmake -DCMAKE_BUILD_TYPE=Release [-DNIEDOIDA_ENABLE_USER_DOCS=On] [-DCMAKE_INSTALL_PREFIX=<installation path>] ..
     make

5. To install newly built binaries execute

  .. code-block:: bash

    make install

macOS
~~~~~

1. Prerequisites:

  a) Xcode 10 or newer
  b) Sphinx 1.6.7 or newer (optional, required for building documentation)

2. Download and unpack niedoida
3. Open ``Terminal`` window
4. Change directory to the niedoida source directory
5. Execute

  .. code-block:: bash

     ./build_external_packages
     mkdir build
     cd build
     ../external_packages/bin/cmake -DCMAKE_BUILD_TYPE=Release [-DNIEDOIDA_ENABLE_USER_DOCS=On] [-DCMAKE_INSTALL_PREFIX=<installation path>]..
     make

5. To install newly built binaries execute

  .. code-block:: bash

    make install

Microsoft Windows
~~~~~~~~~~~~~~~~~

1. Prerequisites:

  a) Microsoft Visual Studio 15 2017
  b) MS MPI
  c) CMake version 3.12 or newer
  d) TortoiseSVN
  e) Cygwin version 2.10.0 or newer, with at least ``devel/make`` and
     ``python`` packages; ``/usr/bin/link.exe`` has to be renamed to
     ``/usr/bin/link-cygwin.exe``
  f) Sphinx 1.6.7 or newer

2. Download and unpack niedoida
3. Open Developer Command Prompt for Visual Studio 15 2017 (64 bit mode)
4. Change directory to the niedoida source directory
5. Build third-party dependencies:

  a) Change directory to ``external_packages``
  b) Install boost

    * Download and unpack boost_1_68_0.zip
    * Bootstrap the buildsystem

      .. code-block:: bat

        cd boost_1_65_1\tools\build
        bootstrap.bat
        b2 --prefix=c:\Users\User\Documents\niedoida\external_packages install
        set PATH=c:\Users\User\Documents\niedoida\external_packages\bin;%PATH%
        cd ..\..

    * Create file ``tools\build\src\user-config.jam`` containing ``using mpi ;``
    * Build and install the libraries

      .. code-block:: bat

        b2 --prefix=c:\Users\User\Documents\niedoida\external_packages --layout=system toolset=msvc variant=release link=static threading=multi runtime-link=shared address-model=64 install
        cd ..

  c) Install yaml-cpp

    * Download and unpack yaml-cpp-yaml-cpp-0.6.2.zip
    * Build and install the library

      .. code-block:: bat

        cd yaml-cpp-yaml-cpp-0.5.3
        mkdir build
        cd build
        cmake -DBUILD_SHARED_LIBS=OFF -DCMAKE_INSTALL_PREFIX=c:\Users\User\Documents\niedoida\external_packages -G "Visual Studio 15 2017 Win64" ..
        cmake --build . --config Release
        cmake --build . --config Release --target install
        cd ..\..

  d) Install hdf5

    * Download and unpack hdf5-1.10.1.zip
    * Build and install the library

      .. code-block:: bat

        cd hdf5-1.10.1
        mkdir build
        cd build
        cmake -DCMAKE_INSTALL_PREFIX=c:\Users\User\Documents\niedoida\external_packages -DHDF5_BUILD_CPP_LIB=ON -G "Visual Studio 15 2017 Win64" ..
        cmake --build . --config Release
        cmake --build . --config Release --target install
        cd ..\..

  e) Install petsc

    * Download and unpack petsc-lite-3.9.2.tar.gz
    * Start Cygwin bash

      .. code-block:: bat

        c:\cygwin64\bin\bash.exe --login

    * Build and install the library

      .. code-block:: bash

        cd /cygdrive/c/Users/User/Documents/niedoida/external_packages/petsc-3.9.2
        ./configure --with-cc="win32fe cl" --with-cxx="win32fe cl" --with-fc=0 --download-f2cblaslapack --with-mpi-include="/cygdrive/c/Program Files (x86)/Microsoft SDKs/MPI/Include" --with-mpi-lib=["/cygdrive/c/Program Files (x86)/Microsoft SDKs/MPI/Lib/x64/msmpi.lib"] --with-mpi-exec="/cygdrive/c/Program Files/Microsoft MPI/Bin/mpiexec.exe" --with-debugging=0 -CFLAGS='-O2 -MD -wd4996' -CXXFLAGS='-O2 -MD -wd4996'
        make PETSC_DIR=/cygdrive/c/Users/User/Documents/niedoida/external_packages/petsc-3.9.2 PETSC_ARCH=arch-mswin-c-opt all
        cp -r include/* ../include
        cp arch-mswin-c-opt/lib/*.lib ../lib
        cp arch-mswin-c-opt/include/* ../include
        exit

  f) Install armadillo

    * Download and unpack armadillo-8.300.2.zip
    * In ``armadillo-8.300.2\cmake_aux\Modules\FindBLAS.cmake`` change

      .. code-block:: cmake

          SET(BLAS_NAMES ${BLAS_NAMES} blas)
          FIND_LIBRARY(BLAS_LIBRARY
            NAMES ${BLAS_NAMES}
            PATHS /usr/lib64/atlas /usr/lib/atlas /usr/lib64 /usr/lib /usr/local/lib64 /usr/local/lib
            )

      to

      .. code-block:: cmake

          SET(BLAS_NAMES ${BLAS_NAMES} libf2cblas)
          FIND_LIBRARY(BLAS_LIBRARY
            NAMES ${BLAS_NAMES}
            PATHS c:/Users/User/Documents/niedoida/external_packages/lib
            )

    * In ``armadillo-8.300.2\cmake_aux\Modules\FindLAPACK.cmake`` change

      .. code-block:: cmake

          SET(LAPACK_NAMES ${LAPACK_NAMES} lapack)
          FIND_LIBRARY(LAPACK_LIBRARY
            NAMES ${LAPACK_NAMES}
            PATHS /usr/lib64/atlas /usr/lib/atlas /usr/lib64 /usr/lib /usr/local/lib64 /usr/local/lib
            )

      to

      .. code-block:: cmake

          SET(LAPACK_NAMES ${LAPACK_NAMES} libf2clapack)
          FIND_LIBRARY(LAPACK_LIBRARY
            NAMES ${LAPACK_NAMES}
            PATHS c:/Users/User/Documents/niedoida/external_packages/lib
            )


    * Build and install the library

      .. code-block:: bat

        cd armadillo-8.300.2
        mkdir build
        cd build
        cmake -DCMAKE_INSTALL_PREFIX=c:\Users\User\Documents\niedoida\external_packages -DDETECT_HDF5=Off -G "Visual Studio 15 2017 Win64" ..
        cmake --build . --config Release
        cmake --build . --config Release --target install
        cd ..\..

  f) Install yacas

    * Download and unpack yacas-1.6.1.zip
    * Build and install the program

      .. code-block:: bat

        cd yacas-1.6.1
        mkdir build
        cd build
        cmake -DCMAKE_INSTALL_PREFIX=c:\Users\User\Documents\niedoida\external_packages -DCYACAS_ENABLE_GUI=OFF -DCYACAS_ENABLE_KERNEL=OFF -G "Visual Studio 15 2017 Win64" ..
        cmake --build . --config Release
        cmake --build . --config Release --target install
        cd ..\..
        editbin /stack:10000000 bin/yacas.exe

6. Build and install niedoida

  * Execute

    .. code-block:: bat

      mkdir build
      cd build
      cmake -G "Visual Studio 15 2017 Win64" [-DNIEDOIDA_ENABLE_USER_DOCS=On] [-DCMAKE_INSTALL_PREFIX=<installation path>] ..
      cmake --build . --config Release --target niedoida

  * To install newly built binaries execute

    .. code-block:: bat

      cmake --build . --config Release --target install

Contributors
------------

* Grzegorz Mazur
* Marcin Makowski
* Witold Piskorz
* Łukasz Ćwiklik
* Mariusz Sterzel
* Mariusz Radoń
* Barbara Jagoda-Ćwiklik
* Waldemar Kulig
* Daniel Błażewicz
* Jakub Sumera
* Krzysztof Kowalczyk
* Mateusz Brela
* Roman Łazarski
* Piotr Kuźniarowicz
* Ewa Czajkowska
* Mateusz Snamina
* Michał Glanowski
* Anna Styrcz
* Alina Mreńca-Kolasińska
* Krzysztof Kolasiński
