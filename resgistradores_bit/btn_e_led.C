//Aprendizado com registradores Botões 

//-----Mapeamento do hardware----
#define btn1 (1<<4)//no esquema eletrico o pin12 está no pb4
#define led (1<<7)//no esquema eletrico pin7 está no pd7
//-------Variaveis Globais-------
//variavel vai agir como flag
boolean bf1 = 0x00;


void setup() {
  //limpando o bit do botão
  DDRB &= ~btn1;
  PORTB |= btn1; //habilita o pull_up interno
  DDRD |= led;//configura saida para led

  while(1){
    //se o registrador em B e o btn1 forem mod. bf1 recebe o valor 1.
    if(!(PINB&btn1))bf1 = 0x01;
    // && representa a porta AND
    if(!(PINB&btn1) && bf1){
      //resetamos a flag
      bf1 = 0x00;
      //usamos o registrador do pullup para mudar o registrador do led
      //use o PORTD poius é aonde está o led**
      PORTD ^= led;
    }//and if

  }//and while 

}//and setup
