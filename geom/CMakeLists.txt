cmake_minimum_required (VERSION 3.8)

project ("geom")

add_library (geom "geom.cpp" "geom.hpp" "geom.test.cpp")
add_executable (geom.test "geom.hpp" "geom.test.cpp")
target_link_libraries(geom.test geom)

