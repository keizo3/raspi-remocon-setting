/* testLED.c */
#include <wiringPi.h>
#include <stdio.h>

#define WRITE_PIN 0

int main(void)
{
    if(wiringPiSetup() == -1){
        printf("error wiringPi setup\n");
        return 1;
    }
    pinMode(WRITE_PIN, OUTPUT);

    while(1){
        digitalWrite(WRITE_PIN, 0);  //LED off
        delay(1000);    //wait 1000ms

        digitalWrite(WRITE_PIN, 1);  //LED on
        delay(1000);    //wait 1000ms
    }
    return 0;
}
