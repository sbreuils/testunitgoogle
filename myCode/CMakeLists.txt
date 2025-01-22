cmake_minimum_required(VERSION 3.13)

# give a name to the project
project(samples)

# find VectorD
# if build as standalone project, find the lib by yourself ...
# if build transitively 


add_executable(samples src/main.cpp)                # file to compile and name of the app
target_link_libraries(samples PRIVATE VectorD)      # lib dependency
target_compile_features(samples PRIVATE cxx_std_14) # use at least c++ 14
target_compile_options(samples PRIVATE -Wall -O2)   # specify some compilation flags

