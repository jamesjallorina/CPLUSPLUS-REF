# To compile this with cmake 
# 1. Go to path=<source_directory>
# 2. Create a build directory outside the source directory
# 3. Following are the steps to compile
#	a. mkdir build
#	b. cd build
#	c. cmake ../<source_directory>
#	d. make
# The final executable is in the build directory <bin_name>
project(auto_ptr)

add_executable(auto_ptr auto_ptr.cxx)
