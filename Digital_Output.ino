/*==================================
DIGITAL OUPUT LED
=====================================

DESCRIPTION:
  THIS PROGRAM BLINK AN LED CONNECTED TO GPI032 WITH 
  A 1SECOND INTERVAL

PROGRAM:
 GOMEZ,SERGIE D.
 CORDOVA, ALTHEA JANE

 DATE: 
    2 SEPTEMBER 2026
*/


uint8_t const LED[] = {32,33,25,26,27,14};
uint8_t const NUM_PINS = sizeof(LED)/sizeof(LED[0]);

#include "LED_Modes.h"

void setup() {
  for(int i = 0; i < NUM_PINS; i++){
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  blink();
  alt();
  run();
}