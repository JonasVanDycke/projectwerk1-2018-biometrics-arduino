char startChar = '{';
char separatorChar = ',';
char endChar = '}';
const int numberOfValues = 5;

void printDoubleArray(double values[]) {
  Serial.print(startChar);
  for(int i = 0; i < numberOfValues; i++) {
    Serial.print(values[i]);
    Serial.print(separatorChar);
    values[i] = values[i];
  }
  Serial.print(endChar);
  delay(delayTime);
}
