cmake_minimum_required(VERSION 3.12)

project(visel VERSION 0.0 DESCRIPTION "Visualization for niedoida partial multipoles module" LANGUAGES CXX)

# **************************************************
# ***********  Prolog                  *************
# **************************************************

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# **************************************************
# ***********  Find external packages  *************
# **************************************************

set (EXTERNAL_PACKAGES_ROOT "${CMAKE_SOURCE_DIR}/../../external_packages")

# Find LA_LIBRARIES:
include(${EXTERNAL_PACKAGES_ROOT}/share/Armadillo/CMake/ArmadilloConfig.cmake)
get_target_property(ARMADILLO_DEPENDENCIES armadillo INTERFACE_LINK_LIBRARIES)
list (APPEND ARMADILLO_DEPENDENCIES gfortran)
set(LA_LIBRARIES ${ARMADILLO_LIBRARIES} ${ARMADILLO_DEPENDENCIES})

# Find VTK:
find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

# Find Boost:
set (BOOST_ROOT "${EXTERNAL_PACKAGES_ROOT}")
set (Boost_NO_SYSTEM_PATHS   ON)
set (Boost_USE_STATIC_LIBS   ON)
find_package(Boost REQUIRED program_options)

# **************************************************
# ***********  Build targets           *************
# **************************************************

add_subdirectory(visel)