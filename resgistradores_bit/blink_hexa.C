//regostrador 02

void setup() {
  //ajustamos nesse exemplo para hexadecimal 0b00100000 == 0x20
  DDRB = 0x20;
  //no portb tambem fazemos a mesma coisa 0b00000000 == 0x00
  PORTB = 0x00;

  while(1){
    PORTB = 0x20;
    delay(100);
    PORTB = 0x00;
    delay(150);
  }//and while
}//and setup
