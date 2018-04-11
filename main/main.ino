
//int S1=A4;
//heartRate
int PulseSensor = A1;
int LED13 = 13;
double alpha = 0.75;
int period = 1;
double change = 0.0;
void heartRate();

//Accelerometer
#include <Wire.h>
#include "MMA8452Q.h"
#include <SparkFun_MMA8452Q.h>
//#include <MMA8452Q.h>
void Accelerometer();
void accel();
void printAccels();
void printCalculatedAccels();
void printOrientation();
//#include "MMA8452.h"


//Temperature
#include <SparkFunTMP102.h>
void Temperature();




//ValueCounter
double value1 = 100.00;
double value2 = 123;
void ValueCounter();

//LCD scherm 16x2
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);






void setup() {
  //  pinMode(S1,INPUT);
  //LCD scherm 16x2
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin (115200);

  //heartRate
  pinMode(PulseSensor, INPUT);
  pinMode(LED13, OUTPUT);

  //Accelerometer
  Serial.println("MMA8452Q Test Code!");
  //accel.init();
  // Wire.begin();
  //initMMA8452();
  MMA8452Q accel;

  
}



void loop() {
  //  if(digitalRead(S1)==LOW)
  //    {ValueCounter();}
  //   if(digitalRead(PulseSensor)==LOW)
  //     {heartRate();}
    if (accel.available()) {
        Accelerometer();}
        
        Temperature();

}


