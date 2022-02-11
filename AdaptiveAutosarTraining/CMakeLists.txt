cmake_minimum_required(VERSION 3.0.0)
project(AdaptiveAutosarTraining VERSION 0.1.0)

include(CTest)

add_subdirectory(helloworld)
add_subdirectory(Employee)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
