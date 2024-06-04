# CMakeList.txt : CMake project for tipi_variabili_e_aritmetica, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (tipi_variabili_e_aritmetica "tipi_variabili_e_aritmetica.cpp" "tipi_variabili_e_aritmetica.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET tipi_variabili_e_aritmetica PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
