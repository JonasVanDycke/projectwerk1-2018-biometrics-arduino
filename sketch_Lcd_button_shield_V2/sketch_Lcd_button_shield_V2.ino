/*
  LiquidCrystal Using Sparkfun LCD Button shield
  https://www.sparkfun.com/products/13293
  NOTE:   This uses different hook up than what the examples in the arduino library use.  see The circuit:
 * LCD RS pin to digital pin 12  (8 for shield)
 * LCD Enable pin to digital pin 11 (9 for shield)
 * LCD D4 pin to digital pin 5   (D4)
 * LCD D5 pin to digital pin 4   (D5 for shield)
 * LCD D6 pin to digital pin 3   (D6 for shield)
 * LCD D7 pin to digital pin 2   (D7 for shield)
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
// for the sparkfun shield
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void showHeartRate();
void showAcceleration();
void showTemperature();
void showMain();

void setup()
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    Serial.begin(9600);  //for debugging

}




void loop()
{
    int buttonValue = 1023;
    lcd.clear();
    showMain();

    
        while (buttonValue > 1015) 
    {
        buttonValue = analogRead(A0);
        Serial.println(buttonValue);
    }
    

    if (buttonValue > 845 && buttonValue < 865)  // left button
      {
       lcd.clear();
       showHeartRate();
       delay(400);
       }

    else if(buttonValue > 915 && buttonValue < 949)  // UP button
      {   
        lcd.clear();
        showAcceleration();
        delay(400);
      }
   /*   
    if (buttonValue > 895 && buttonValue < 910) // down button
      {
        lcd.clear();
        showMain();
        delay(400);
      }*/
      
    else if (buttonValue > 810 && buttonValue < 820) // right button
      {
        lcd.clear();
        showTemperature();
        delay(400);
      }
    else(buttonValue = analogRead(A0));
    }
    
      // sit in this loop till key unpressed





void showHeartRate() {
  lcd.setCursor(0,0);
  lcd.print("Heart Rate:");
  //lcd.print(heartRate);
  lcd.setCursor(0,1);
  lcd.print("                ");
}

void showAcceleration()
{
  lcd.setCursor(0,0);
  lcd.print("X:");
  //lcd.print(x);
  lcd.print(" ");
  lcd.setCursor(8,0);
  lcd.print("Y:");
  //lcd.print(y);
  lcd.setCursor(0,1);
  lcd.print("Z:");
  //lcd.print(z);
  lcd.print("         ");
}


void showTemperature()
{
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  //lcd.print(temperature);
  lcd.print(" C   ");
  lcd.setCursor(0,1);
  lcd.print("                ");
}


void showMain()
{
  lcd.setCursor(0,0);
  lcd.print("HR:L");
  lcd.setCursor(7,0);
  lcd.print("Temp:R");
  lcd.setCursor(0,1);
  lcd.print("XYZ:U");
  lcd.setCursor(7,1);
  lcd.print("Back:D");
}



















  /*
    int buttonValue = 1023;
    lcd.clear();
    lcd.print("Press Any Button");

    while (buttonValue > 1015) 
    {
        buttonValue = analogRead(A0);
        Serial.println(buttonValue);
    }

    if (buttonValue > 845 && buttonValue < 865)  // left button
    {
        buttonindex = LEFT_BUTTON;
    }
    else if (buttonValue > 915 && buttonValue < 949)  // UP button
    {
        buttonindex = UP_BUTTON;
    }
    else if (buttonValue > 895 && buttonValue < 910) // down button
    {
        buttonindex = DN_BUTTON;
    }
    else if (buttonValue > 810 && buttonValue < 820) // right button
    {
        buttonindex = RIGHT_BUTTON;
    }
    else if (buttonValue > 605 && buttonValue < 620) // select button
    {
        buttonindex = SEL_BUTTON;
    }
    else buttonindex = UNDEFINED;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(buttons[buttonindex]);
    lcd.print("  pressed");
    // wait for key to be releasted

    while (buttonValue < 1000) 
    {
        buttonValue = analogRead(A0);
    };  // sit in this loop till key unpressed

}*/
