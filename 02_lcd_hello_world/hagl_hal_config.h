/*

MIT License

Copyright (c) 2020 Mika Tuupola

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-cut-

This file is part of the GD32V MIPI DCS HAL for the HAGL graphics library:
https://github.com/tuupola/hagl_gd32v_mipi

SPDX-License-Identifier: MIT

*/

#ifndef _HAGL_HAL_CONFIG_H
#define _HAGL_HAL_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif


#define MIPI_DISPLAY_ADDRESS_MODE   (MIPI_DCS_ADDRESS_MODE_BGR|MIPI_DCS_ADDRESS_MODE_SWAP_XY|MIPI_DCS_ADDRESS_MODE_MIRROR_Y)
#define MIPI_DISPLAY_OFFSET_X       (1)
#define MIPI_DISPLAY_OFFSET_Y       (26)

#define MIPI_DISPLAY_WIDTH          (160)
#define MIPI_DISPLAY_HEIGHT         (80)

#ifdef __cplusplus
}
#endif
#endif /* _HAGL_HAL_CONFIG_H */