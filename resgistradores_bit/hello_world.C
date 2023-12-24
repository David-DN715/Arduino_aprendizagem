//tecnica bitwise pisca_pisca interno

void setup() {
  //direction port B inicia com o bit 5.
  DDRB = 0b00100000;
  //escrever o conteudo!
  PORTB =0b00000000;

  while(1){
    PORTB = 0b00100000;
    delay(100);
    PORTB = 0b00000000;
    delay(150);
  }//and while

}//and setup
