int delayTime = 500;

void setupAccelerometer();
void setupButton();
//void ButtonSetup();
void setupHeartRate();
void setupLcd();
void setupSerialController();
void setupTemperature();
void showHeartRate();
void showAcceleration();
void showTemperature();
//void showMain();
void LcdOnScreen();

void setup() {
  setupAccelerometer();
  setupButton();
  //ButtonSetup();
  setupHeartRate();
  setupLcd();
  setupSerialController();
  setupTemperature();
  //showMain();
}

void loop() {
  
  double accel[3];
  getAcceleration(accel[0], accel[1], accel[2]);
  double values[] = {getTemperature(), accel[0], accel[1], accel[2], getHeartRate()};
  printDoubleArray(values);

  LcdOnScreen(values[0], values[1], values[2], values[3], values[4]);
  //showAcceleration(values[1], values[2], values[3]);
  //showTemperature(values[0]);
  //showHeartRate(values[4]);
  delay(delayTime);
}
