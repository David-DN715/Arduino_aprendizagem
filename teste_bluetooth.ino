#include <BluetoothSerial.h>

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth não está habilitado! Execute `make menuconfig` e habilite-o
#endif

BluetoothSerial BT;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  BT.begin("Esp Bluetooth");
  Serial.println("O dispositivo Iniciou, pode parear");
}

void loop() {
  // put your main code here, to run repeatedly:

}
