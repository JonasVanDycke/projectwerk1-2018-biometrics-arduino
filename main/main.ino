const int numberOfValues = 5;
double values[numberOfValues] = {25, 0, 2, -9.81, 85.05};
char startChar = '{';
char separatorChar = ',';
char endChar = '}';
int delayTime = 1000;

void setup() {
  Serial.begin(115200);
}

void loop() {  
  Serial.print(startChar);
  for(int i = 0; i < numberOfValues; i++) {
    Serial.print(values[i]);
    Serial.print(separatorChar);
  }
  Serial.print(endChar);
  delay(delayTime);
}
