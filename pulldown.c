int botao;
int led =4;

void setup() {
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  botao = digitalRead(3);
  Serial.println(botao);

  if (botao == 1){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
