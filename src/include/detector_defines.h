/********************************************************************************
 * Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ********************************************************************************/

/*! \file detector_defines.h
 * Values for canary lengths and fills.
 * Also has defines for GPU kernel synchronizations.
 */

#ifndef __POISON_VALUES_H
#define __POISON_VALUES_H

#include <stdint.h>

//GPU check mutators
//#define SEQUENTIAL
#define KERN_CALLBACK

//measured in bytes
#define POISON_FILL_LENGTH 8192

//measured in array indexes
#define IMAGE_POISON_WIDTH 16
#define IMAGE_POISON_HEIGHT 16
#define IMAGE_POISON_DEPTH 16

#define POISON_FILL 0xC2

extern const uint8_t poisonFill_8b; ///< 8 bit poison fill
extern const uint32_t poisonFill_32b; ///< 32 bit poison fill
extern const unsigned poisonWordLen; ///< length of canary region in 32 bit words

#endif //__POISON_VALUES_H