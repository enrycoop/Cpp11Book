# CMakeList.txt : CMake project for test_e_cicli, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (test_e_cicli "test_e_cicli.cpp" "test_e_cicli.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test_e_cicli PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
