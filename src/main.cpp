#include <Arduino.h>
#include "sonoff_standard_hw.h"

/**************************************************************************************************/

/* Globals */

Sonoff sonoff;

/**************************************************************************************************/

void setup()
{
    // Initialize Serial
    Serial.begin(115200);
    Serial.println("System Started.");

    // Initialize Sonoff hardware
    sonoff.rele_init();
    sonoff.led_init();
    sonoff.button_init();

    Serial.println("Hardware initialized.");
    Serial.println("");
}

void loop()
{
    static bool btn_pressed = false;

    if(sonoff.button_pressed())
    {
        if(!btn_pressed)
        {
            Serial.println("Button pressed.");
            sonoff.led_on();
            sonoff.rele_on();
            btn_pressed = true;
        }
    }
    else
    {
        if(btn_pressed)
        {
            Serial.println("Button released.");
            sonoff.led_off();
            sonoff.rele_off();
            btn_pressed = false;
        }
    }
    delay(250);
}
