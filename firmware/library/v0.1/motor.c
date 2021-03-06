#include "globals.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void set_motor(u08 num, signed char direction) {
}

void init_motor(void) {
  set_motor(0,0);
  set_motor(1,0);

  DDRB |= _BV(MOTOR0_EN_PIN) | _BV(MOTOR1_EN_PIN);
  DDRD |= _BV(MOTOR0_DIR0_PIN) | _BV(MOTOR0_DIR1_PIN) | _BV(MOTOR1_DIR0_PIN) | _BV(MOTOR1_DIR1_PIN);
}

void test_motor(void) {
   //test motor 0
   PORTD |= _BV(MOTOR0_DIR0_PIN);
   PORTD &= ~_BV(MOTOR0_DIR1_PIN);
   PORTB |= _BV(MOTOR0_EN_PIN);
   
   //test motor 1
   PORTD |= _BV(MOTOR1_DIR1_PIN);
   PORTD &= ~_BV(MOTOR1_DIR0_PIN);
   PORTB |= _BV(MOTOR1_EN_PIN);
}
