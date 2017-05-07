# -*- Mode:cmake -*-

####################################################################################################
#                                                                                                  #
# Copyright (C) 2016-2017 University of Hull                                                       #
#                                                                                                  #
####################################################################################################

cma_print_current_directory()

find_package(Boost ${BOOST_MINIMUM_VERSION} REQUIRED COMPONENTS unit_test_framework)

include_directories(SYSTEM ${Boost_INLCUDE_DIR})

set(SRC)
list(APPEND SRC null_action_clear.cpp)
list(APPEND SRC null_action_draw.cpp)
list(APPEND SRC null_action_swap.cpp)
list(APPEND SRC null_context.cpp)
list(APPEND SRC null_pass_standard.cpp)
list(APPEND SRC null_state_raster.cpp)
list(APPEND SRC null_window.cpp)
list(APPEND SRC statistics_cpu.cpp)

#add_definitions(-DHUGH_ALL_TRACE)

set(LIBS)
list(APPEND LIBS ${LIB})
list(APPEND LIBS ${Boost_LIBRARIES})

cma_setup_test(${LIB} SOURCES ${SRC} DEPENDENCIES ${LIBS})
