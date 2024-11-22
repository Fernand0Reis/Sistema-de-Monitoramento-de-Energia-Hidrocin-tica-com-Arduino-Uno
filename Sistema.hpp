#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int sensorTensao = A0; 
const int sensorCorrente = A1; 
const int ledAlerta = 13; 

const float limitePotencia = 2.0;

void setup() {
  lcd.begin(16, 2); 
  lcd.backlight(); 
  pinMode(ledAlerta, OUTPUT);
  lcd.print("Monitor Hidro");
  delay(2000);
  lcd.clear();
}

void loop() {
  float tensao = analogRead(sensorTensao) * (5.0 / 1023.0) * 10;
  float corrente = analogRead(sensorCorrente) * (5.0 / 1023.0) * 5;
  float potencia = tensao * corrente;

  lcd.setCursor(0, 0);
  lcd.print("Tensao: ");
  lcd.print(tensao, 1);
  lcd.print("V");

  lcd.setCursor(0, 1);
  lcd.print("Pot: ");
  lcd.print(potencia, 1);
  lcd.print("W");

  if (potencia < limitePotencia) {
    digitalWrite(ledAlerta, HIGH);
  } else {
    digitalWrite(ledAlerta, LOW);
  }

  delay(1000); //
}
