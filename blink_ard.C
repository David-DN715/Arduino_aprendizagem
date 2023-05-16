//definido pino 3 como led
int led =3;

void setup() {
  pinMode(led, OUTPUT);
  
}

void loop() {
  //liga a saida led
  digitalWrite(led, HIGH);
  //esperamos um pouco
  delay(1000);
  //desligamos o LED
  digitalWrite(led,LOW);
  //esperamos um pouco
  delay(1000);
}
