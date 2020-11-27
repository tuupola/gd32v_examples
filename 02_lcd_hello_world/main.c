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
        // int16_t x0 = 0;
        // int16_t x1 = DISPLAY_WIDTH / 3;
        // int16_t x2 = 2 * x1;

        // hagl_fill_rectangle(x0, 0, x1 - 1, DISPLAY_HEIGHT, red);
        // hagl_fill_rectangle(x1, 0, x2 - 1, DISPLAY_HEIGHT, green);
        // hagl_fill_rectangle(x2, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT, blue);
        // hagl_flush();

        hagl_put_text(L"Hello world!", 48, 32, red, font6x9);
        delay_1ms(100);
        hagl_flush();

        hagl_put_text(L"Hello world!", 48, 32, green, font6x9);
        delay_1ms(100);
        hagl_flush();

        hagl_put_text(L"Hello world!", 48, 32, blue, font6x9);
        delay_1ms(100);
        hagl_flush();
    };
}