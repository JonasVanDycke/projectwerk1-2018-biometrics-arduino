//int S1=A4;
//heartRate
int PulseSensor = A1;
int LED13 = 13;
double alpha = 0.75;
int period = 500;
double change = 0.0;
void heartRate();

//LCD scherm 16x2
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  //pinMode(S1,INPUT);
  //LCD scherm 16x2
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin (115200);

  //heartRate
  pinMode(PulseSensor, INPUT);
  pinMode(LED13, OUTPUT);
}


void loop() {
       heartRate();
}
