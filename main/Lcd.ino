#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setupLcd()
{
  lcd.begin(16, 2);
  lcd.clear();
}

void LcdOnScreen(double values[]){
  //lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("HR:");
  lcd.print(values[4]);
  lcd.setCursor(8,0);
  lcd.print("Temp:");
  lcd.print(values[0]);
  lcd.setCursor(0,1);
  lcd.print("X:");
  lcd.print(values[1]);
  lcd.print(" ");
  lcd.setCursor(5,1);
  lcd.print("Y:");
  lcd.print(values[2]);
  lcd.setCursor(10,1);
  lcd.print("Z:");
  lcd.print(values[3]);
}

void showHeartRate(double heartRate)
{ 
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Heart Rate:");
  lcd.print(heartRate);
  lcd.setCursor(0,1);
  lcd.print("                ");
}


void showAcceleration(double x, double y, double z)
{ 
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("X:");
  lcd.print(x);
  lcd.print(" ");
  lcd.setCursor(8,0);
  lcd.print("Y:");
  lcd.print(y);
  lcd.setCursor(0,1);
  lcd.print("Z:");
  lcd.print(z);
  lcd.print("         ");
}


void showTemperature(double temperature)
{ 
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temperature);
  lcd.print(" C   ");
  lcd.setCursor(0,1);
  lcd.print("                ");
}


void showMain()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("HR:L");
  lcd.setCursor(7,0);
  lcd.print("Temp:R");
  lcd.setCursor(0,1);
  lcd.print("XYZ:U");
  lcd.setCursor(7,1);
  lcd.print("Back:D");
}
