//http://hackerspacetech.com/lcd-button-shield-v2-for-arduino-by-sparkfun.html#.WvRSWoiFNPZ

#define Rbase ((unsigned long)47)
#define Rup ((unsigned long)75)  
#define Rdown  ((unsigned long)62) 
#define Rleft  ((unsigned long)47)  
#define Rright ((unsigned long)39)  
#define Rselect  ((unsigned long)28) 

#define LEFT_BUTTON     0
#define UP_BUTTON       1
#define DN_BUTTON       2
#define RIGHT_BUTTON    3
#define SEL_BUTTON      4
#define UNDEFINED       5

int buttonindex;
 
int sensorValue ;
int KeyTable[31];
int buttonValue = 1023;

void ButtonSetup(){
    void showMain();
        while (buttonValue > 1015) 
    {
        buttonValue = analogRead(A0);
        Serial.println(buttonValue);
    }
    if (buttonValue > 845 && buttonValue < 865)  // left button
      {
       void showHeartRate();
       //delay(400);
       }
    if (buttonValue > 810 && buttonValue < 820) // right button
      {
        void showTemperature();
        //delay(400);
      }
    if(buttonValue > 915 && buttonValue < 949)  // UP button
      {   
        void showAcceleration();
        //delay(400);
      }
   /*   
    if (buttonValue > 895 && buttonValue < 910) // down button
      {
        lcd.clear();
        showMain();
        delay(400);
      }*/
    
    while (buttonValue < 1000) 
    {
        buttonValue = analogRead(A0);
    }  // sit in this loop till key unpressed

}




void setupButton()
{
  GenerateKeyTable(analogRead(A0),KeyTable);
}

void GenerateKeyTable(int vcc,int* array)
{
  float resistor;
 
  resistor = ((float)Rup)/(Rbase + Rup);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rdown)/(Rbase + Rdown);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rleft)/(Rbase + Rleft);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rright)/(Rbase + Rright);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rselect)/(Rbase + Rselect);
  *array++ = resistor*vcc;
}
