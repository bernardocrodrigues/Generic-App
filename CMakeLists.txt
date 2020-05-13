cmake_minimum_required(VERSION 3.10)

# set the project name
project(Yocto_App
        VERSION 0.1.0
        LANGUAGES C CXX)

# specify the default C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# specify the default C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# set global compiler flags
add_compile_options(-Wall)
# SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")
# SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

add_subdirectory(src/hello_c_11)
add_subdirectory(src/hello_cxx_11)
add_subdirectory(src/hello_cxx_14)
add_subdirectory(src/hello_cxx_20)

# configure_file(TutorialConfig.h.in TutorialConfig.h)