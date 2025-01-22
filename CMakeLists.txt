cmake_minimum_required(VERSION 3.14)
# give a name to the project
project(myProject)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add myLib
message(STATUS "myLib cmake part ..." )
add_subdirectory(myLib INTERFACE)
include_directories(${CMAKE_SOURCE_DIR}/myLib/include) # important : other projects call by this cmake will know this include directory

# add myCode
message(STATUS "myCode cmake part ..." )
add_subdirectory(myCode)

# add google test
message(STATUS "google test cmake part ..." )
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# add myTest
message(STATUS "myTest cmake part ..." )
add_subdirectory(myTest)
