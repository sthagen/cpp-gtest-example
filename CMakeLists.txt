cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

# ---- Project ----

project(gtest_example LANGUAGES CXX)

# ---- Fetch CPM ----

set(CPM_DOWNLOAD_VERSION 0.27.2)
set(CPM_DOWNLOAD_LOCATION "${CMAKE_BINARY_DIR}/cmake/CPM_${CPM_DOWNLOAD_VERSION}.cmake")

if(NOT (EXISTS ${CPM_DOWNLOAD_LOCATION}))
    message(STATUS "Downloading CPM.cmake v${CPM_DOWNLOAD_VERSION}")
    file(DOWNLOAD https://github.com/TheLartians/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake ${CPM_DOWNLOAD_LOCATION})
endif()

include(${CPM_DOWNLOAD_LOCATION})

# ---- Add dependencies via CPM ----
# See https://github.com/TheLartians/CPM.cmake for details and examples

# for now play with the fibonacci stuff from Lars
CPMAddPackage(
  NAME fibonacci
  GITLAB_REPOSITORY TheLartians/Fibonacci
  VERSION 2.0
)

CPMAddPackage(
  NAME googletest
  GITHUB_REPOSITORY google/googletest
  GIT_TAG 389cb68b87193358358ae87cc56d257fd0d80189
  # Not released but we take some approved commit (above)
  VERSION 1.10.1
  OPTIONS
      "INSTALL_GTEST OFF"
      "gtest_force_shared_crt"
)

# ---- Create binary ----

add_executable(gtest_example main.cpp)
target_link_libraries(gtest_example fibonacci gtest gtest_main gmock)
set_target_properties(gtest_example PROPERTIES CXX_STANDARD 17)

# ---- Enable testing ----

enable_testing() 
add_test(gtest_example gtest_example)
