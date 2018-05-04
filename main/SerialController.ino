char startChar = '{';
char separatorChar = ',';
char endChar = '}';
const int numberOfValues = 5;

void setupSerialController() {
  Serial.begin(115200);  
}

void printDoubleArray(double values[]) {
  Serial.print(startChar);
  for(int i = 0; i < numberOfValues; i++) {
    Serial.print(values[i]);
    Serial.print(separatorChar);
  }
  Serial.print(endChar);
}
