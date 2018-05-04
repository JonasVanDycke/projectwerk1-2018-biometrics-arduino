//Video link:  https://www.youtube.com/watch?v=82T_zBZQkOE
int PulseSensor = A1;

void HeartRate()
{
  pinMode(PulseSensor, INPUT);
}

double getHeartRate() {
  int rawValue = analogRead (PulseSensor);
  int heartRate = 6000/(rawValue/5);

  return heartRate;
}
