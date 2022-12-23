#include "mbed.h"

DigitalOut buzzer(D2);
DigitalOut led_green(LED_GREEN);
DigitalIn sw2(SW2);
int on = 1, off = 0;

int main()
{
    while (true) 
    {
        if(sw2==1) {
            buzzer = on;
            wait_us(500000);
            buzzer = off;
            wait_us(500000);
        } else buzzer = off; //Press Switch 2 to temporarily silence the buzzer
    }
}