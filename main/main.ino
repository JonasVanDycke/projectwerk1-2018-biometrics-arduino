const int numberOfValues = 5;
double values[numberOfValues] = {25, 0, 2, -9.81, 85.05};
char startChar = '{';
char separatorChar = ',';
char endChar = '}';
int delayTime = 1000;

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
}

void loop() {
  Serial.print(startChar);
  for(int i = 0; i < numberOfValues; i++) {
    Serial.print(values[i]);
    Serial.print(separatorChar);
    values[i] = values[i] + random(-3,3);
  }
  Serial.print(endChar);
  delay(delayTime);
}
