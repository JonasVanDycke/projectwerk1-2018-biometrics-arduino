//Video link:  https://www.youtube.com/watch?v=82T_zBZQkOE
void heartRate(){
  
  static double oldValue = 0;
    static double oldChange = 0;
    int rawValue = analogRead (PulseSensor);                                         // Reading the sensors values
    double value = alpha * oldValue + (1 - alpha) * rawValue;         // calculating values using the formula
    int x = rawValue/5;
    int value2 = 6000/x;
    
    Serial.print (rawValue);              // printing the sensor output value on the screen
    Serial.print (",");                                                                                          
    Serial.println (value);             // printing the heart beat value on the screen
    oldValue = value;

    lcd.setCursor(0,0);
    lcd.print("Heart Rate: ");
    lcd.print(rawValue);
    lcd.setCursor(0,1);
    lcd.print("BPM: ");
    lcd.print(value2);
    delay(period);
    delay(500);
 

    }
    


