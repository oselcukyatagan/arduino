int main(void){
  
  DDRD = 0b10001000; // set 7 and 3 as output
  PORTD = 0b00001000; // set 3 high
  
  
  while(1){
  
  _delay_ms(500);  
  PORTD = PORTD | 0b10000000; // change 7th bit leave rest untouched
  _delay_ms(500);
  PORTD = PORTD & 0b01111111; // change 7th bit leave rest untouched
  
  } 
 
}
