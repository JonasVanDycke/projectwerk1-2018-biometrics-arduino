int delayTime = 500;

void setupAccelerometer();
void setupButton();
void setupHeartRate();
//void setupLcd();
void setupSerialController();
void setupTemperature();

void setup() {
  setupAccelerometer();
  setupButton();
  setupHeartRate();
  //setupLcd();
  setupSerialController();
  setupTemperature();
}

void loop() {
  double accel[3];
  getAcceleration(accel[0], accel[1], accel[2]);
  double values[] = {getTemperature(), accel[0], accel[1], accel[2], getHeartRate()};
  printDoubleArray(values);
  delay(delayTime);
}
