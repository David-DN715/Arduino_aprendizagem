//registrador! bitwise**

void setup() {
  //entre parenteses o numero que deseja alocar e << depois o bit que deseja modificar
  //alteramos o bit 5 pois ele é o nosso portb
  //usamos a logica (or) para colocarmos ou 0 ou 1 para alterar apenas o bit 5
  DDRB |= (1<<5);
  //no portb iniciamos em 0 com uma negação do DDRB
  //O & representa a logica binaria E o ~ é a negação.
  PORTB &= ~(1<<5);

  while(1){
    PORTB |=(1<<5);
    delay(500);
    PORTB &=~(1<<5);
    delay(120);
  }//and while
}//and setup
