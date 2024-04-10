/*
 *****************************************************************************
 * Copyright by ams OSRAM AG                                                       *
 * All rights are reserved.                                                  *
 *                                                                           *
 * IMPORTANT - PLEASE READ CAREFULLY BEFORE COPYING, INSTALLING OR USING     *
 * THE SOFTWARE.                                                             *
 *                                                                           *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS       *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT         *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS         *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT  *
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     *
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT          *
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     *
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY     *
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT       *
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE     *
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.      *
 *****************************************************************************
 */

// This is a calibration of my device. Replace it with one of yours.
// This calibration file must match the SPAD map ID. This is for
// my configs

#include "tmf8828_shim.h"
#include "tmf8828_calib.h"

const PROGMEM uint8_t tmf8828_calib_0[] = {
 0x19, 0x3, 0xBC, 0x0, 0x1, 0x4, 0x1, 0x1,
 0x1, 0x1, 0xA0, 0xF, 0x87, 0x56, 0x34, 0x12,
 0xC3, 0x8A, 0x4D, 0x31, 0xD7, 0x5D, 0x7, 0x0,
 0x35, 0x3F, 0x7, 0x0, 0x97, 0x6D, 0x7, 0x0,
 0x14, 0x67, 0x7, 0x0, 0xDD, 0x54, 0x7, 0x0,
 0x48, 0x58, 0x7, 0x0, 0x5C, 0x77, 0x7, 0x0,
 0x45, 0x74, 0x7, 0x0, 0x45, 0x74, 0x7, 0x0,
 0xD7, 0x5D, 0x7, 0x0, 0xF, 0xFC, 0x5, 0x0,
 0x58, 0x5E, 0x0, 0x0, 0x92, 0x60, 0x0, 0x0,
 0xE1, 0x77, 0x0, 0x0, 0xE2, 0x41, 0x0, 0x0,
 0xA3, 0x1F, 0x1, 0x0, 0xC1, 0x47, 0x0, 0x0,
 0x5D, 0x9B, 0x0, 0x0, 0x14, 0x42, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x87, 0x56, 0x34, 0x12,
 0xBB, 0xE4, 0xE6, 0x81, 0xBC, 0x5C, 0x7, 0x0,
 0x73, 0x40, 0x7, 0x0, 0xF4, 0x69, 0x7, 0x0,
 0x14, 0x67, 0x7, 0x0, 0x87, 0x52, 0x7, 0x0,
 0xB2, 0x53, 0x7, 0x0, 0xA4, 0x72, 0x7, 0x0,
 0x5C, 0x77, 0x7, 0x0, 0xD3, 0x71, 0x7, 0x0,
 0xBC, 0x5C, 0x7, 0x0, 0x71, 0xE4, 0x5, 0x0,
 0x50, 0x4F, 0x0, 0x0, 0x3F, 0x73, 0x0, 0x0,
 0x70, 0x59, 0x0, 0x0, 0x36, 0x43, 0x0, 0x0,
 0xD, 0x98, 0x0, 0x0, 0x9E, 0x46, 0x0, 0x0,
 0x1F, 0x68, 0x0, 0x0, 0xA4, 0x48, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFC, 0x7D,
};
const PROGMEM uint8_t tmf8828_calib_1[] = {
 0x19, 0x4, 0xBC, 0x0, 0x1, 0x4, 0x1, 0x1,
 0x1, 0x1, 0xA0, 0xF, 0x87, 0x56, 0x34, 0x12,
 0x9B, 0x4C, 0x4C, 0xC4, 0x6C, 0x59, 0x7, 0x0,
 0xB9, 0x3C, 0x7, 0x0, 0xFF, 0x68, 0x7, 0x0,
 0x1A, 0x64, 0x7, 0x0, 0xCF, 0x4D, 0x7, 0x0,
 0x0, 0x4F, 0x7, 0x0, 0x3, 0x71, 0x7, 0x0,
 0xD3, 0x71, 0x7, 0x0, 0xAE, 0x6C, 0x7, 0x0,
 0x6C, 0x59, 0x7, 0x0, 0xD0, 0x35, 0x6, 0x0,
 0xC5, 0x4D, 0x0, 0x0, 0xE2, 0x8F, 0x0, 0x0,
 0x47, 0x54, 0x0, 0x0, 0x55, 0x5D, 0x0, 0x0,
 0xCF, 0x64, 0x0, 0x0, 0x4D, 0x53, 0x0, 0x0,
 0x72, 0x57, 0x0, 0x0, 0xEB, 0x5A, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x87, 0x56, 0x34, 0x12,
 0x3B, 0xF4, 0xEE, 0x5, 0x6C, 0x59, 0x7, 0x0,
 0x6B, 0x36, 0x7, 0x0, 0xA, 0x68, 0x7, 0x0,
 0x5, 0x61, 0x7, 0x0, 0x0, 0x4F, 0x7, 0x0,
 0x31, 0x50, 0x7, 0x0, 0xAE, 0x6C, 0x7, 0x0,
 0x72, 0x6E, 0x7, 0x0, 0x72, 0x6E, 0x7, 0x0,
 0x6C, 0x59, 0x7, 0x0, 0xD6, 0x27, 0x6, 0x0,
 0x22, 0x4F, 0x0, 0x0, 0x70, 0x88, 0x0, 0x0,
 0x94, 0x4E, 0x0, 0x0, 0x52, 0x84, 0x0, 0x0,
 0x8E, 0x4B, 0x0, 0x0, 0x53, 0x5A, 0x0, 0x0,
 0x4D, 0x49, 0x0, 0x0, 0xE9, 0x71, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF0, 0x7E,
};
const PROGMEM uint8_t tmf8828_calib_2[] = {
 0x19, 0x5, 0xBC, 0x0, 0x1, 0x4, 0x1, 0x1,
 0x1, 0x1, 0xA0, 0xF, 0x87, 0x56, 0x34, 0x12,
 0xAF, 0xFF, 0x66, 0xAD, 0x6C, 0x59, 0x7, 0x0,
 0x76, 0x3B, 0x7, 0x0, 0xF4, 0x69, 0x7, 0x0,
 0x5, 0x61, 0x7, 0x0, 0xCF, 0x4D, 0x7, 0x0,
 0x87, 0x52, 0x7, 0x0, 0x3, 0x71, 0x7, 0x0,
 0x45, 0x74, 0x7, 0x0, 0xD3, 0x71, 0x7, 0x0,
 0x6C, 0x59, 0x7, 0x0, 0x91, 0x23, 0x6, 0x0,
 0x86, 0x55, 0x0, 0x0, 0xF9, 0x53, 0x0, 0x0,
 0x29, 0xD4, 0x0, 0x0, 0xF2, 0x40, 0x0, 0x0,
 0x39, 0xFC, 0x0, 0x0, 0x4, 0x46, 0x0, 0x0,
 0xE1, 0x69, 0x0, 0x0, 0xD5, 0x52, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x87, 0x56, 0x34, 0x12,
 0xA7, 0x79, 0x48, 0xBC, 0x48, 0x58, 0x7, 0x0,
 0x34, 0x3A, 0x7, 0x0, 0x1F, 0x66, 0x7, 0x0,
 0x5, 0x61, 0x7, 0x0, 0x31, 0x50, 0x7, 0x0,
 0x5C, 0x51, 0x7, 0x0, 0x3, 0x71, 0x7, 0x0,
 0xD0, 0x75, 0x7, 0x0, 0xD3, 0x71, 0x7, 0x0,
 0x48, 0x58, 0x7, 0x0, 0x1F, 0x1E, 0x6, 0x0,
 0x27, 0x4D, 0x0, 0x0, 0x99, 0x65, 0x0, 0x0,
 0x15, 0x72, 0x0, 0x0, 0x97, 0x3F, 0x0, 0x0,
 0xBD, 0x88, 0x0, 0x0, 0xCF, 0x48, 0x0, 0x0,
 0xE0, 0x5B, 0x0, 0x0, 0x29, 0x64, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xEC, 0x7E,
};
const PROGMEM uint8_t tmf8828_calib_3[] = {
 0x19, 0x6, 0xBC, 0x0, 0x1, 0x4, 0x1, 0x1,
 0x1, 0x1, 0xA0, 0xF, 0x87, 0x56, 0x34, 0x12,
 0x87, 0x61, 0xCE, 0xF7, 0x24, 0x57, 0x7, 0x0,
 0xF2, 0x38, 0x7, 0x0, 0x1F, 0x66, 0x7, 0x0,
 0x15, 0x62, 0x7, 0x0, 0xCF, 0x4D, 0x7, 0x0,
 0xCF, 0x4D, 0x7, 0x0, 0x97, 0x6D, 0x7, 0x0,
 0xA4, 0x72, 0x7, 0x0, 0x97, 0x6D, 0x7, 0x0,
 0x24, 0x57, 0x7, 0x0, 0x34, 0x42, 0x6, 0x0,
 0x1C, 0x4A, 0x0, 0x0, 0x5B, 0x88, 0x0, 0x0,
 0x7D, 0x58, 0x0, 0x0, 0x9F, 0x50, 0x0, 0x0,
 0xC1, 0x5F, 0x0, 0x0, 0xC5, 0x54, 0x0, 0x0,
 0xBD, 0x53, 0x0, 0x0, 0x85, 0x84, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x87, 0x56, 0x34, 0x12,
 0x27, 0x89, 0x12, 0xBB, 0x0, 0x56, 0x7, 0x0,
 0xE1, 0x33, 0x7, 0x0, 0x1F, 0x66, 0x7, 0x0,
 0xE6, 0x5E, 0x7, 0x0, 0x0, 0x4F, 0x7, 0x0,
 0x0, 0x4F, 0x7, 0x0, 0xAE, 0x6C, 0x7, 0x0,
 0x28, 0x70, 0x7, 0x0, 0xC5, 0x6B, 0x7, 0x0,
 0x0, 0x56, 0x7, 0x0, 0x44, 0x37, 0x6, 0x0,
 0x84, 0x4A, 0x0, 0x0, 0x16, 0x9D, 0x0, 0x0,
 0x25, 0x4E, 0x0, 0x0, 0xF4, 0x5D, 0x0, 0x0,
 0x7F, 0x4B, 0x0, 0x0, 0x4, 0x5D, 0x0, 0x0,
 0x9C, 0x4C, 0x0, 0x0, 0x4, 0x91, 0x0, 0x0,
 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFE, 0x7E,
};
