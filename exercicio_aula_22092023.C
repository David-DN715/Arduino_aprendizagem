#define Led_alerta 13 //Led amarelo
#define Led_erro 12 //Led vermelho
#define BTN_inicio 15 //botao
#define Sensor1 02 //definimos pino do sensor

//pré-definimos que o sensor não leu movimento
int sensor1_estado = LOW; 
int val = 0; //variavel iniciada em 0

void setup() {
  pinMode(Led_alerta, OUTPUT);
  pinMode(Led_erro, OUTPUT);
  pinMode(BTN_inicio, INPUT);
  pinMode(Sensor1, INPUT);
  Serial.begin(115200);

}
//começo do codigo principal
void loop() {
  //realiza leitura do BOTAO 
  if(digitalRead(BTN_inicio)){
    //se o botao for pessionado liga luz alerta
    digitalWrite(Led_alerta, HIGH);
    //faz a leitura do sensor1
    val = digitalRead(Sensor1);
    //se o sensor1 tiver movimento
    if (val == HIGH){
      //mudar estado do sensor de LOW para HIGH
      if (sensor1_estado == LOW){
        sensor1_estado = HIGH;
        Serial.println("Movimento aqui");
      }
    }
    //caso contrario
    else{
      //se o estado do sensor estiver HIGH
      if(sensor1_estado == HIGH){
        //mude para LOW
        sensor1_estado = LOW;
         Serial.println("FIM DO MOVIMENTO");
      }
    }

  }
}
