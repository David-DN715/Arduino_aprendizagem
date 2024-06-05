/*Progama Criado por: David jose ferreira do nascimento
 *Progama Scara-v
 *hardware: Arduino UNO R3
 *biblioteca: VarSpeedServo
 *modelo de progamação: Maquina de estado
*/

//Incluir bibliotecas
#include <VarSpeedServo.h>
//---Mapeamento de Hardware---

//ponteiro de função
void (*PonteiroDeFuncao)();

//definir pinos dos servos
#define ser01 3
#define ser02 5
#define ser03 6
#define ser04 9

//---Criando objetos---

//criando os servos
VarSpeedServo serv00;
VarSpeedServo serv01;
VarSpeedServo serv02;
VarSpeedServo serv03;

//Definição dos Botões
int ButtonA1 = 2;
int ButtonA2 = 4;
int ButtonB1 = 7;
int ButtonB2 = 8;
int ButtonC1 = 12;
int ButtonC2 = 13;

//-------angulos de servos------------------
float anguloServoA = 0;
float anguloServoB = 0;
float anguloServoC = 0;

void setup() {
  // botoes
  pinMode(ButtonA1, INPUT);
  pinMode(ButtonA2, INPUT);
  pinMode(ButtonB1, INPUT);
  pinMode(ButtonB2, INPUT);
  pinMode(ButtonC1, INPUT);
  pinMode(ButtonC2, INPUT);

  //Setup dos servos 
  serv00.attach(ser01);
  serv01.attach(ser02);
  serv02.attach(ser03);
  serv03.attach(ser04);


//Initial position of robot-----a ver as posições
  ser00.slowmove(0, 100);
  ser01.slowmove(0, 100);
  ser02.slowmove(0, 100);
  ser03.slowmove(0, 100);

  //start serial
  Serial.begin(19200);

  PonteiroDeFuncao = Init;

}

//------Machine states-----
void Init(void);

void loop() {
  //Chama a função apontada pela maquina de estados
  (*PonteiroDeFuncao)();

}
//*******************************************
void Init (void){

   int botaoA1, botaoA2;
  int botaoB1, botaoB2;
  int botaoC1, botaoC2;

  botaoA1 = digitalRead(ButtonA1);
  botaoA2 = digitalRead(ButtonA2);
  botãoB1 = digitalRead(ButtonB1);
  botaoB2 = digitalRead(uttonB2);
  botaoC1 = digitalRead(ButtonC1);
  botaoC2 = digitalRead(ButtonC2);


  //************Eixo Base **************
  if (botaoA1 == 0) 
    {    
      if (anguloServoA < 180) 
        {
          anguloServoA = anguloServoA + 5;
        }
    }
    
    if (botaoA2 == 0) 
    {    
      if (anguloServoA > 0) 
        {
          anguloServoA = anguloServoA - 5;
        }
    }

    //***********Eixo do cotovelo***********
     if (botaoB1 == 0) 
    {    
      if (anguloServoB < 180) 
        {
          anguloServoB = anguloServoB + 5;
        }
    }
    
    if (botaoB2 == 0) 
    {    
      if (anguloServoB > 0) 
        {
          anguloServoB = anguloServoB - 5;
        }
    }

  
  }

  //***********Cremalheira ************
  if (botaoC1 == 0) 
    {    
      if (anguloServoC < 180) 
        {
          anguloServoC = anguloServoC + 5;
        }
    } 
    if (botaoC2 == 0) 
    {    
      if (anguloServoC > 0) 
        {
          anguloServoC = anguloServoC - 5;
        }
    }

    
      // Aqui faço a leitura do Angulo do servo motor e imprimo o resultado no monitor serial  
      servo0.write(anguloServoA);
      Serial.print("AnguloA ");
      Serial.println(anguloServoA);
      
      servo1.write(anguloServoB);
      Serial.print("AnguloB ");
      Serial.println(anguloServoB);

      servo2.write(anguloServoC);
      Serial.print("AnguloC ");
      Serial.println(anguloServoC);
 
 }
