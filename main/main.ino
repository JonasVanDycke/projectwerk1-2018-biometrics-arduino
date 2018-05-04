int delayTime = 500;

void setupAccelerometer();
void setupButton();
void setupHeartRate();
void setupLcd();
void setupSerialController();
void setupTemperature();

void setup() {
  setupAccelerometer();
  setupButton();
  setupHeartRate();
  setupLcd();
  setupSerialController();
  setupTemperature();
  showMain();
}

void loop() {
  double accel[3];
  getAcceleration(accel[0], accel[1], accel[2]);
  double values[] = {getTemperature(), accel[0], accel[1], accel[2], getHeartRate()};
  printDoubleArray(values);

  //showAcceleration(values[1], values[2], values[3]);
  //showTemperature(values[0]);
  showHeartRate(values[4]);
  delay(delayTime);
}
