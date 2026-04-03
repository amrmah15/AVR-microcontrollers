
#include <util/delay.h>
#include <avr/io.h>
void main(void){
DDRA=0b11111111 ;
PORTA=0b00001111;
_delay_ms(1000);
PORTA=0b00001111;

}
