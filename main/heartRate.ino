//Video link:  https://www.youtube.com/watch?v=82T_zBZQkOE

double getHeartRate() {
  int rawValue = analogRead (PulseSensor);
  int heartRate = rawValue/5;
  int bpm = 6000/heartRate;

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Heart Rate: ");
  lcd.print(heartRate);
  lcd.setCursor(0,1);
  lcd.print("BPM: ");
  lcd.print(bpm);
  
  return heartRate;
}
