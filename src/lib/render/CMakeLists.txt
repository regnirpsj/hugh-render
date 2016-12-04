# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016 University of Hull                                                            #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

find_package(Boost ${BOOST_MINIMUM_VERSION} REQUIRED)
find_package(GLM   ${GLM_MINIMUM_VERSION}   REQUIRED)
find_package(HUGH                           REQUIRED COMPONENTS field support)

include_directories(SYSTEM ${Boost_INCLUDE_DIR})
include_directories(SYSTEM ${GLM_INCLUDE_DIR})
include_directories(SYSTEM ${HUGH_INCLUDE_DIRS})

set(SRC)

list(APPEND SRC context/base.cpp)
list(APPEND SRC context/device.cpp)
list(APPEND SRC context/swap.cpp)

list(APPEND SRC pass/base.cpp)
list(APPEND SRC pass/container.cpp)
list(APPEND SRC pass/null.cpp)

list(APPEND SRC stage/base.cpp)
list(APPEND SRC stage/null.cpp)

list(APPEND SRC statistics/base.cpp)
list(APPEND SRC statistics/cpu.cpp)

list(APPEND SRC window/base.cpp)

#add_definitions(-DHUGH_ALL_TRACE)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${Boost_LIBRARIES})

set(LIB hugh_render)

cma_setup_library(${LIB} SOURCES ${SRC} DEPENDENCIES ${LIBS} INCDIR hugh/render)
cma_setup_export(${LIB})

add_subdirectory(test EXCLUDE_FROM_ALL)
