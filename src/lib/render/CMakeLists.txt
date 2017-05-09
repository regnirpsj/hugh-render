# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016-2017 University of Hull                                                       #
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

list(APPEND SRC action/base.cpp)
list(APPEND SRC context/base.cpp)
list(APPEND SRC context/device.cpp)
list(APPEND SRC context/swap.cpp)
list(APPEND SRC interface/activatable.cpp)
list(APPEND SRC interface/applicable.cpp)
list(APPEND SRC interface/executable.cpp)
list(APPEND SRC interface/invalidatable.cpp)
list(APPEND SRC interface/resizable.cpp)
list(APPEND SRC pass/base.cpp)
list(APPEND SRC pass/container.cpp)
list(APPEND SRC shader/base.cpp)
list(APPEND SRC state/base.cpp)
list(APPEND SRC statistics/base.cpp)
list(APPEND SRC statistics/cpu.cpp)
list(APPEND SRC target/base.cpp)
list(APPEND SRC window/base.cpp)

list(APPEND SRC null/context.cpp)
list(APPEND SRC null/window.cpp)
list(APPEND SRC null/action/clear.cpp)
list(APPEND SRC null/action/draw.cpp)
list(APPEND SRC null/action/setup.cpp)
list(APPEND SRC null/action/swap.cpp)
list(APPEND SRC null/pass/standard.cpp)
list(APPEND SRC null/shader/compute.cpp)
list(APPEND SRC null/shader/fragment.cpp)
list(APPEND SRC null/shader/geometry.cpp)
list(APPEND SRC null/shader/tessellation.cpp)
list(APPEND SRC null/shader/vertex.cpp)
list(APPEND SRC null/state/blend.cpp)
list(APPEND SRC null/state/depth_stencil.cpp)
list(APPEND SRC null/state/raster.cpp)
list(APPEND SRC null/state/sampler.cpp)
list(APPEND SRC null/target/color.cpp)
list(APPEND SRC null/target/depth.cpp)

#add_definitions(-DHUGH_ALL_TRACE)

set(LIBS)
list(APPEND LIBS ${HUGH_LIBRARIES})
list(APPEND LIBS ${Boost_LIBRARIES})

set(LIB hugh_render)

cma_setup_library(${LIB} SOURCES ${SRC} DEPENDENCIES ${LIBS} INCDIR hugh/render)
cma_setup_export(${LIB})

add_subdirectory(test EXCLUDE_FROM_ALL)
