//definido pino 3 como led
int tempo;

void setup() {
  //colocamos agora dois leds para piscar alternadamente
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  tempo = 1000;
  //liga a saida led
  //enquanto um está ligado o outro está desligado!
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  //esperamos um pouco
  delay(tempo);
  //desligamos o LED
  digitalWrite(2,LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  //esperamos um pouco
  delay(tempo);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(tempo);
}
