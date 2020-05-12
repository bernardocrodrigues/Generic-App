add_executable(Hello_CXX_14 main.cpp)

# Set target specific C++ standard
set_property(TARGET Hello_CXX_14 PROPERTY CXX_STANDARD 14)

install(TARGETS Hello_CXX_14 DESTINATION bin)
