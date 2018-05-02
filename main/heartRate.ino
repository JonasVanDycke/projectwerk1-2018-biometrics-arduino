//Video link:  https://www.youtube.com/watch?v=82T_zBZQkOE

double getHeartRate() {
  int rawValue = analogRead (PulseSensor);
  int heartRate = rawValue/5;
  int bpm = 6000/heartRate;

  return heartRate;
}
