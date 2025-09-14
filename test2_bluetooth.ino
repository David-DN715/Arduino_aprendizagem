#include <BluetoothSerial.h>

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth não está habilitado! Execute `make menuconfig` e habilite-o
#endif

BluetoothSerial BT;

int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("Esp_David_aprendizagem");
  Serial.println("O dispositivo Iniciou, pode parear");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    Serial.write(Serial.read());}
  if(Serial.available()){
    Serial.write(BT.read());
    }
    delay(2000);
    BT.write(count);
    count = count > 254? 0 : count+1;
    }
    
