#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

double value1 = 100.00;
double value2 = 123;

void setup() {
  Serial.begin(115200);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Value1: " + String(value1));
  lcd.setCursor(0,1);
  lcd.print("Value2: " + String(value2));
  
  Serial.print(String("[") + value1 + String("|") + value2 + String("]"));
  Serial.print("\n");
  delay(500);

  value1++;
  value2++;
}
