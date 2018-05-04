int delayTime = 500;

void setup() {

  Serial.begin(115200);


  //Temperature
  setupTemperatureSensor();
}


void loop() {
    
    double values[] = {getTemperature(), 0, 0, 0, getHeartRate()};
    printDoubleArray(values);
    delay(delayTime);
}
