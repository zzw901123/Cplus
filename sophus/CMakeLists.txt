cmake_minimum_required(VERSION 3.7)
project(SOPHUS_TEST)

set( CMAKE_CXX_STANDARD 14)
# 添加对gdb的支持
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")


list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
find_package(PCL 1.2 REQUIRED)

SET(CMAKE_CXX_COMPILER "g++")
if(CMAKE_COMPILER_IS_GNUCXX)
   execute_process(COMMAND ${CMAKE_C_COMPILER} -dumpversion OUTPUT_VARIABLE GCC_VERSION)
   if (GCC_VERSION VERSION_GREATER 4.7 OR GCC_VERSION VERSION_EQUAL 4.7)
        message(STATUS "C++11 activated.")
        add_definitions("-std=gnu++11")
   elseif(GCC_VERSION VERSION_GREATER 4.3 OR GCC_VERSION VERSION_EQUAL 4.3)
        message(WARNING "C++0x activated. If you get any errors update to a compiler which fully supports C++11")
        add_definitions("-std=gnu++0x")
   else ()
        message(FATAL_ERROR "C++11 needed. Therefore a gcc compiler with a version higher than 4.3 is needed.")   
   endif()
else(CMAKE_COMPILER_IS_GNUCXX)
   add_definitions("-std=c++0x") 
endif(CMAKE_COMPILER_IS_GNUCXX)


list( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules )

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

# g2o
find_package(G2O REQUIRED)
include_directories(${G2O_INCLUDE_DIRS})

find_package(Sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})

# Eigen
find_package(Eigen REQUIRED)

FIND_PACKAGE(Threads)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib)
MESSAGE(${PROJECT_SOURCE_DIR})
SET(INC_DIR /usr/include/dbus-1.0/dbus)
INCLUDE_DIRECTORIES(INC_DIR)
MESSAGE(${INC_DIR})

AUX_SOURCE_DIRECTORY(src DIR_SRCS)
SET(LOCATION ${DIR_SRCS})

ADD_EXECUTABLE(${PROJECT_NAME} ${LOCATION})
target_link_libraries(${PROJECT_NAME} ${G2O_CORE_LIBRARY} ${G2O_STUFF_LIBRARY} ${CHOLMOD_LIBRARIES} ${Sophus_LIBRARIES} ${PCL_LIBRARIES} -lboost_thread -lpthread -ldbus-1 fmt -g)


