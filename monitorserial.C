//leitura de um botão
int botao;

void setup() {
  pinMode(3, INPUT);
  Serial.begin(9600);//liga o monitor serial

}

void loop() {
  
  botao = digitalRead(3);//retorna o valor 0 ou 1
  Serial.println(botao);//printa no serial monitor o valor do botão

}
