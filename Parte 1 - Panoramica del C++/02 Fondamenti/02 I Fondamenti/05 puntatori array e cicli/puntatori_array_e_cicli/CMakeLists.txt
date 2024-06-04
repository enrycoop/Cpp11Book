# CMakeList.txt : CMake project for puntatori_array_e_cicli, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (puntatori_array_e_cicli "puntatori_array_e_cicli.cpp" "puntatori_array_e_cicli.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET puntatori_array_e_cicli PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
