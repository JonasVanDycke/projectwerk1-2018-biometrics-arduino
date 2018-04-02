//int S1=A4;
//heartRate
  int PulseSensor = A5;
  int LED13 = 13;                                    
  double alpha = 0.75;
  int period = 1;
  double change = 0.0;

//ValueCounter
  double value1 = 100.00;
  double value2 = 123;
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

//ValueCounter
  void ValueCounter();
//heartRate
  void heartRate();



void setup() {
//  pinMode(S1,INPUT);
  pinMode(PulseSensor,INPUT);
  pinMode(LED13,OUTPUT);
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin (115200);
}



void loop() {
//  if(digitalRead(S1)==LOW)
//    {ValueCounter();}
    if(digitalRead(PulseSensor)==LOW)
      {heartRate();}
}
