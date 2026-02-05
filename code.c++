#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define SOIL_SENSOR A0
#define RELAY 8
#define DHTPIN 2
#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

int moistureThreshold = 500; // adjust based on sensor

void setup() {
  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, HIGH); // Pump OFF (relay active LOW)

  lcd.init();
  lcd.backlight();
  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("Smart Irrigation");
  lcd.setCursor(0, 1);
  lcd.print("System Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  int soilValue = analogRead(SOIL_SENSOR);
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  lcd.setCursor(0, 0);
  lcd.print("Soil:");
  lcd.print(soilValue);
  lcd.print(" ");

  lcd.setCursor(0, 1);
  lcd.print("T:");
  lcd.print(temp);
  lcd.print("C H:");
  lcd.print(humidity);

  delay(1500);

  if (soilValue > moistureThreshold) {
    // Soil dry → Pump ON
    digitalWrite(RELAY, LOW);
    lcd.clear();
    lcd.print("Pump ON");
  } else {
    // Soil wet → Pump OFF
    digitalWrite(RELAY, HIGH);
    lcd.clear();
    lcd.print("Pump OFF");
  }

  delay(2000);
}
