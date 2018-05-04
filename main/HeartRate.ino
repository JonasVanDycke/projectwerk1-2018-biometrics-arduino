//Video link:  https://www.youtube.com/watch?v=82T_zBZQkOE
int PulseSensor = A1;

void setupHeartRate()
{
  pinMode(PulseSensor, INPUT);
}

double getHeartRate() {
  int heartRate = analogRead (PulseSensor);

  return heartRate;
}
/*
    int UpperThreshold = 518;
    int LowerThreshold = 490;
    int reading = A1;
    float BPM = 0.0;
    bool IgnoreReading = false;
    bool FirstPulseDetected = false;
    unsigned long FirstPulseTime = 0;
    unsigned long SecondPulseTime = 0;
    unsigned long PulseInterval = 0;

    void setupHeartRate(){
      Serial.begin(115200);
    }

    void loop(){

      reading = analogRead(0); 

      // Heart beat leading edge detected.
      if(reading > UpperThreshold && IgnoreReading == false){
        if(FirstPulseDetected == false){
          FirstPulseTime = millis();
          FirstPulseDetected = true;
        }
        else{
          SecondPulseTime = millis();
          PulseInterval = SecondPulseTime - FirstPulseTime;
          FirstPulseTime = SecondPulseTime;
        }
        IgnoreReading = true;
      }

      // Heart beat trailing edge detected.
      if(reading < LowerThreshold){
        IgnoreReading = false;
      }  

      BPM = (1.0/PulseInterval) * 60.0 * 1000;
      Serial.print(reading);
      Serial.print("\t");
      Serial.print(PulseInterval);
      Serial.print("\t");
      Serial.print(BPM);
      Serial.println(" BPM");
      Serial.flush();

      // Please don't use delay() - this is just for testing purposes.
      delay(50);  
    }
      */
