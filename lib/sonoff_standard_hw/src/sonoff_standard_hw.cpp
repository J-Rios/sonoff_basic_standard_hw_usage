/* Libraries */

#include "sonoff_standard_hw.h"

/**************************************************************************************************/

/* Sonoff Constructor */

Sonoff::Sonoff(void)
{}

/**************************************************************************************************/

/* Sonoff Button Methods */

void Sonoff::button_init(void)
{
    pinMode(P_I_BTN, INPUT_PULLUP);
}

uint8_t Sonoff::button_pressed(void)
{
    return !digitalRead(P_I_BTN);
}

/**************************************************************************************************/

/* Sonoff LED Methods */

void Sonoff::led_init(void)
{
    digitalWrite(P_O_LED, HIGH);
    pinMode(P_O_LED, OUTPUT);
}

void Sonoff::led_on(void)
{
    digitalWrite(P_O_LED, LOW);
}

void Sonoff::led_off(void)
{
    digitalWrite(P_O_LED, HIGH);
}

/**************************************************************************************************/

/* Sonoff Rele Methods */

void Sonoff::rele_init(void)
{
    digitalWrite(P_O_RELE, HIGH);
    pinMode(P_O_RELE, OUTPUT);
}

void Sonoff::rele_on(void)
{
    digitalWrite(P_O_RELE, LOW);
}

void Sonoff::rele_off(void)
{
    digitalWrite(P_O_RELE, HIGH);
}
