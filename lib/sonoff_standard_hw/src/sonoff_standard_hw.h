/* Include Guard */

#ifndef SONOFF_STANDARD_HW_H_
#define SONOFF_STANDARD_HW_H_

/**************************************************************************************************/

/* Defines & Macros */

// Input & Output GPIOs
#define P_I_BTN 0
#define P_O_RELE 12
#define P_O_LED 13
#define P_I_RF_RX 14

/**************************************************************************************************/

/* Libraries */

#include <Arduino.h>

/**************************************************************************************************/

class Sonoff
{
    public:
        // Constuctor
        Sonoff(void);

        // LED methods
        void led_init(void);
        void led_on(void);
        void led_off(void);

        // Button methods
        void button_init(void);
        uint8_t button_pressed(void);

        // Rele methods
        void rele_init(void);
        void rele_on(void);
        void rele_off(void);
};

/**************************************************************************************************/

#endif