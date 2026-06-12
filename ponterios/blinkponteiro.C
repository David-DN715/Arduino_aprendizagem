int LED = 14;
bool Sled = false;

//Inverte o estado no pino e atualiza variavel global
void blinkLed(int pino, bool *ac_std){
  *ac_std =!(*ac_std);
  digitalWrite(pino, *ac_std);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLed(LED, &Sled);
  delay(1000); // this speeds up the simulation
}
