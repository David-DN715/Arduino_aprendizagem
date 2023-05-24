#include <Wire.h>                     // biblioteca requerida para rodar I2C
#include <SPI.h>                      // biblioteca requerida para rodar I2C
#include <Adafruit_BMP280.h>          // biblioteca BMP280
#include <Adafruit_GFX.h>             // biblioteca OLED
#include <Adafruit_SSD1306.h>         // biblioteca OLED

// Instancia o objeto sensor da biblioteca Adfruit
Adafruit_BMP280 sensor;               // cria o objeto sensor

// configuração do display OLED
#define SCREEN_WIDTH 128             // OLED display width, in pixels (128)
#define SCREEN_HEIGHT 64             // OLED display height, in pixels (64)
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1            // Reset pin # (or -1 if sharing Arduino reset pin)

// instancia o objeto display da biblioteca Adfruit
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); 

void setup() {
  Serial.begin(9600);                                      // inicializa comunicação serial
  sensor.begin();                                          // inicializa bmp280
  // initialize OLED display with the I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);               // inicializa display OLED
  display.clearDisplay();                                  // limpa a exibição do display

  // verifica a conexão do módulo
  if (!sensor.begin()) {
    Serial.println("Sensor não encontrado. Verifique as conexoes do circuito!");
    //while (1);
  } 
}

void loop() {
  display.clearDisplay();                                // limpa a exibição do display 
  show();                                                // chama a função show()
  delay(1000);                                           // espera de 1000ms (1seg)
}

// função de exibição no display OLED
void show() {
  display.drawRoundRect(0, 0, 128, 16, 3, WHITE);       // retângulo superior
  display.drawRoundRect(0, 16, 128, 48, 3, WHITE);      // retângulo inferior
  display.setTextColor(WHITE);
  display.setCursor(22, 4);
  display.setTextSize(1);
  display.print("Arduino Squids");  
  display.setCursor(10, 23);
  display.print("Temp :         C");
  display.setCursor(10, 23);
  display.drawCircle(96, 23, 1, WHITE);
  display.setCursor(55, 23);
  display.print(sensor.readTemperature(), 2); 
  display.setCursor(10, 35);
  display.print("Press:        atm");
  display.setCursor(55, 35);
  display.print(sensor.readPressure()/101325, 3);  // converte para atm
  display.setCursor(10, 49);
  display.print("Altit:        m");
  display.setCursor(55, 49);
  display.print(sensor.readAltitude(1013.25), 1); // em relação ao nível do mar
  
  display.display();  
}
