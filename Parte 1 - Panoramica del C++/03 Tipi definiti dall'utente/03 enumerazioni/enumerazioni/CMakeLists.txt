# CMakeList.txt : CMake project for enumerazioni, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (enumerazioni "enumerazioni.cpp" "enumerazioni.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET enumerazioni PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
