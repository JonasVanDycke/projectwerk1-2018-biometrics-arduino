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
  //#include <MMA8452Q.h>
  void Accelerometer();
  void accel();
  void printAccels();
  void printCalculatedAccels();
  void printOrientation();
 
  //#include "MMA8452.h"
  


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
    pinMode(PulseSensor,INPUT);
    pinMode(LED13,OUTPUT);

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

    // First, use accel.read() to read the new variables:

    accel.read();

    

    // accel.read() will update two sets of variables. 

    // * int's x, y, and z will store the signed 12-bit values 

    //   read out of the accelerometer.

    // * floats cx, cy, and cz will store the calculated 

    //   acceleration from those 12-bit values. These variables 

    //   are in units of g's.

    // Check the two function declarations below for an example

    // of how to use these variables.

    printCalculatedAccels();

    //printAccels(); // Uncomment to print digital readings

    

    // The library also supports the portrait/landscape detection

    //  of the MMA8452Q. Check out this function declaration for

    //  an example of how to use that.

    printOrientation();

    

    Serial.println(); // Print new line every time.

  }





// The function demonstrates how to use the accel.x, accel.y and

//  accel.z variables.

// Before using these variables you must call the accel.read()

//  function!

void printAccels()

{

  Serial.print(accel.x, 3);

  Serial.print("\t");

  Serial.print(accel.y, 3);

  Serial.print("\t");

  Serial.print(accel.z, 3);

  Serial.print("\t");

}



// This function demonstrates how to use the accel.cx, accel.cy,

//  and accel.cz variables.

// Before using these variables you must call the accel.read()

//  function!

void printCalculatedAccels()

{ 

  Serial.print(accel.cx, 3);

  Serial.print("\t");

  Serial.print(accel.cy, 3);

  Serial.print("\t");

  Serial.print(accel.cz, 3);

  Serial.print("\t");

}



// This function demonstrates how to use the accel.readPL()

// function, which reads the portrait/landscape status of the

// sensor.

void printOrientation()

{

  // accel.readPL() will return a byte containing information

  // about the orientation of the sensor. It will be either

  // PORTRAIT_U, PORTRAIT_D, LANDSCAPE_R, LANDSCAPE_L, or

  // LOCKOUT.

  byte pl = accel.readPL();

  switch (pl)

  {

  case PORTRAIT_U:

    Serial.print("Portrait Up");

    break;

  case PORTRAIT_D:

    Serial.print("Portrait Down");

    break;

  case LANDSCAPE_R:

    Serial.print("Landscape Right");

    break;

  case LANDSCAPE_L:

    Serial.print("Landscape Left");

    break;

  case LOCKOUT:

    Serial.print("Flat");

    break;

  }

}

      //Accelerometer();
}
}
