/*

MIT No Attribution

Copyright (c) 2020-2021 Mika Tuupola

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

-cut-

SPDX-License-Identifier: MIT-0

*/

#include <nuclei_sdk_hal.h>
#include <hagl_hal.h>
#include <hagl.h>
#include <font6x9.h>

void main()
{
    color_t red = hagl_color(255, 0, 0);
    color_t green = hagl_color(0, 255, 0);
    color_t blue = hagl_color(0, 0, 255);

    hagl_init();
    hagl_clear_screen();
    //hagl_put_text(L"Hこんにちは世界!", 20, 60, green, font6x9);

    while (1) {
        /* Center the text automagically. */
        int16_t cx = DISPLAY_WIDTH / 2 - (12 * 6 / 2);
        int16_t cy = DISPLAY_HEIGHT / 2 - 4;

        hagl_put_text(L"Hello world!", cx, cy, red, font6x9);
        delay_1ms(100);
        hagl_flush();

        hagl_put_text(L"Hello world!", cx, cy, green, font6x9);
        delay_1ms(100);
        hagl_flush();

        hagl_put_text(L"Hello world!", cx, cy, blue, font6x9);
        delay_1ms(100);
        hagl_flush();
    };
}