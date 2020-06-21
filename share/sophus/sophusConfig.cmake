################################################################################
#
# CMake module for specifying details of an installed sophus package.
#
# It defines the following variables:
#
#     sophus_INCLUDE_DIRS
#
################################################################################

# http://www.cmake.org/Wiki/CMake/Tutorials/How_to_create_a_ProjectConfig.cmake_file

# Specify include path relative to this find module, so that the installed tree can be relocated.
set( sophus_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/../../include;/usr/include/eigen3")

# Not using yet - see CMakeLists.txt
# set( sophus_VERSION "")
# set( sophus_DEFINITIONS "" )

