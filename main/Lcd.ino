void showHeartRate()
{
  lcd.setCursor(0,0);
  lcd.print("Heart Rate: ");
  lcd.print(heartRate);
  lcd.setCursor(0,1);
  lcd.print("BPM: ");
  lcd.print(bpm);
  lcd.print("   ");
}


void showAccelerometer()
{
  lcd.setCursor(0,0);
  lcd.print("X:"accel.x, 3);
  lcd.setCursor(7,0);
  lcd.print("Y:"accel.y, 3);
  lcd.setCursor(0,1);
  lcd.print("Z:"accel.z, 3);
}


void showTemperature()
{
  lcd.setCursor(0,0);
  lcd.print("Temp:"temperature, 3);
  lcd.print("°C");
}


void showMain()
{
  lcd.setCursor(0,0);
  lcd.print("HR:L");
  lcd.setCursor(7,0);
  lcd.print("Accel:R");
  lcd.setCursor(0,1);
  lcd.print("XYZ:U");
  lcd.setCursor(7,1);
  lcd.print("Back:D");
}

