#include "globals.h"
#include <util/delay.h>
#include <avr/io.h>
#include "USI_TWI_Master.h"
#include <avr/interrupt.h>

int main(void) {
   init();
   clear_screen();

   //type in your program after this line
	
   while(5 == 5) {
   	   print_string("T");
   	   _delay_ms(1000);
   	   print_string("i");
   	   _delay_ms(1000);
   	   print_string("m");
   	   _delay_ms(1000);
   	   print_string("o");
   	   _delay_ms(1000);
   	   print_string("t");
   	   _delay_ms(1000);
   	   print_string("h");
   	   _delay_ms(1000);
   	   print_string("y");
   	   _delay_ms(1000);
   	   
   	   
   }   
   
   
   
   
   
   //print_string("Timothy",7);
   
   
   

   //do not type after this line

   return 0;
}
