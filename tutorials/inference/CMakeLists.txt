# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

# /* ----------------------------------------------------------------------
#  * Project:  TinyTTA Engine
#  *
#  * Reference Paper:
#  *  TinyTTA: Efficient Test-time Adaptation via Early-exit Ensembles on Edge Devices,
#  *  Neural Information Processing Systems (NeurIPS) 2024
#  *
#  * Contact Authors:
#  *  Young D. Kwon: ydk21@cam.ac.uk
#  *  Hong Jia: hong.jia@unimelb.edu.au
#  *  Alessio Orsino: aorsino@dimes.unical.it
#  *  Ting Dang: ting.dang@unimelb.edu.au
#  *  Domenico Talia: talia@dimes.unical.it
#  *  Cecilia Mascolo: cm542@cam.ac.uk
#  *
#  * Target ISA:  ARMv7E-M
#  * -------------------------------------------------------------------- */


cmake_minimum_required(VERSION 3.19.0 FATAL_ERROR)

set(MBED_PATH ${CMAKE_CURRENT_SOURCE_DIR}/mbed-os CACHE INTERNAL "")
set(MBED_CONFIG_PATH ${CMAKE_CURRENT_BINARY_DIR} CACHE INTERNAL "")
set(APP_TARGET Inference_Tutorial)

include(${MBED_PATH}/tools/cmake/app.cmake)

project(${APP_TARGET})

add_subdirectory(${MBED_PATH})

add_executable(${APP_TARGET})

target_sources(${APP_TARGET}
    PRIVATE
        main.cpp
)

target_link_libraries(${APP_TARGET}
    PRIVATE
        mbed-os
)

mbed_set_post_build(${APP_TARGET})

option(VERBOSE_BUILD "Have a verbose build process")
if(VERBOSE_BUILD)
    set(CMAKE_VERBOSE_MAKEFILE ON)
endif()
