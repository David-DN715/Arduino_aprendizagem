//definido pino 3 como led
int tempo;

void setup() {
  pinMode(9, OUTPUT);
  
}

void loop() {
  tempo = 400;
  //liga a saida led
  digitalWrite(9, HIGH);
  //esperamos um pouco
  delay(tempo);
  //desligamos o LED
  digitalWrite(9,LOW);
  //esperamos um pouco
  delay(tempo);
}
