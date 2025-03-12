/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

/* ----------------------------------------------------------------------
 * Project:  TinyTTA Engine
 *
 * Reference Paper:
 *  TinyTTA: Efficient Test-time Adaptation via Early-exit Ensembles on Edge Devices,
 *  Neural Information Processing Systems (NeurIPS) 2024
 *
 * Contact Authors:
 *  Young D. Kwon: ydk21@cam.ac.uk
 *  Hong Jia: hong.jia@unimelb.edu.au
 *  Alessio Orsino: aorsino@dimes.unical.it
 *  Ting Dang: ting.dang@unimelb.edu.au
 *  Domenico Talia: talia@dimes.unical.it
 *  Cecilia Mascolo: cm542@cam.ac.uk
 *
 * Target ISA:  ARMv7E-M
 * -------------------------------------------------------------------- */

#include "main_functions.h"

// This is the default main used on systems that have the standard C entry
// point. Other devices (for example FreeRTOS or ESP32) that have different
// requirements for entry code (like an app_main function) should specialize
// this main.cc file in a target-specific subfolder.
int main(int argc, char* argv[]) {
    setup();
    while (true) {
        loop();
    }
}
