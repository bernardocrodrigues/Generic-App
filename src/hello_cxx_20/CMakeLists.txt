add_executable(Hello_CXX_20 main.cpp)

# Set target specific C++ standard
# set_property(TARGET Hello_CXX_20 PROPERTY CXX_STANDARD 20)
target_compile_features(Hello_CXX_20 PRIVATE cxx_std_20)

# Set Local compile flags
target_compile_options(Hello_CXX_20 PRIVATE -Wextra -Wpedantic)

# target_compile_options(Hello_CXX_20 PUBLIC -Wall)

install(TARGETS Hello_CXX_20 DESTINATION bin)