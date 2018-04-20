/*
//https://www.youtube.com/watch?v=DsTa366PIKg
// https://github.com/sparkfun/SparkFun_MMA8452Q_Arduino_Library/tree/V_1.1.0
void Accelerometer(){
  
  
    // First, use accel.read() to read the new variables:
    accel.read();
    
    // accel.read() will update two sets of variables. 
    // * int's x, y, and z will store the signed 12-bit values 
    //   read out of the accelerometer.
    // * floats cx, cy, and cz will store the calculated 
    //   acceleration from those 12-bit values. These variables 
    //   are in units of g's.
    // Check the two function declarations below for an example
    // of how to use these variables.
    printCalculatedAccels();
    //printAccels(); // Uncomment to print digital readings
    
    // The library also supports the portrait/landscape detection
    //  of the MMA8452Q. Check out this function declaration for
    //  an example of how to use that
    printOrientation();
    
    Serial.println(); // Print new line every time.
  }

// The function demonstrates how to use the accel.x, accel.y and
//  accel.z variables.
// Before using these variables you must call the accel.read()
//  function!
void printAccels() {
  Serial.print(accel.x, 3);
  Serial.print("\t");
  Serial.print(accel.y, 3);
  Serial.print("\t");
  Serial.print(accel.z, 3);
  Serial.print("\t");
  lcd.setCursor(0,0);
  lcd.print("X:"accel.x, 3);
  lcd.setCursor(7,0);
  lcd.print("Y:"accel.y, 3);
  lcd.setCursor(0,1);
  lcd.print("Z:"accel.z, 3);
}

// This function demonstrates how to use the accel.cx, accel.cy,
//  and accel.cz variables.
// Before using these variables you must call the accel.read()
//  function!
void printCalculatedAccels() { 
  Serial.print(accel.cx, 3);
  Serial.print("\t");
  Serial.print(accel.cy, 3);
  Serial.print("\t");
  Serial.print(accel.cz, 3);
  Serial.print("\t");
}

// This function demonstrates how to use the accel.readPL()
// function, which reads the portrait/landscape status of the
// sensor.
void printOrientation() {
  // accel.readPL() will return a byte containing information
  // about the orientation of the sensor. It will be either
  // PORTRAIT_U, PORTRAIT_D, LANDSCAPE_R, LANDSCAPE_L, or
  // LOCKOUT.
  byte pl = accel.readPL();
  switch (pl) {
  case PORTRAIT_U:
    Serial.print("Portrait Up");
    break;
  case PORTRAIT_D:
    Serial.print("Portrait Down");
    break;
  case LANDSCAPE_R:
    Serial.print("Landscape Right");
    break;
  case LANDSCAPE_L:
    Serial.print("Landscape Left");
    break;
  case LOCKOUT:
    Serial.print("Flat");
    break;
  }
}

  
  
  
  
  
  
  
  /*
  int acelCont[3];  // VÃ¡riÃ¡vel que armazena os valores das leituras de 12-bit
  readAccelData(acelCont);  // Leitura de todos os eixos do sensor
  float acelG[3];  // VariÃ¡vel para armazenar os valores da aceleraÃ§Ã£o em g (9,8 m/sÂ²)

  // Calcula a aceleraÃ§Ã£o e separa na matriz acelG
  for (int i = 0 ; i < 3 ; i++)
  {
    acelG[i] = (float) acelCont[i] / ((1<<12)/(2*GSCALE));  // Pega o valor da e 
  }

  // Imprimi os valores na Serial
  for (int i = 0 ; i < 3 ; i++)
  {
    Serial.print(acelG[i], 4);  // Imprime os valores de cada eixo na serial (XYZ)
    Serial.print("\t");  // TabulaÃ§Ã£o entre as leituras
    lcd.setCursor(0,0);
    lcd.print(acelG[i], 4);
  }
  Serial.println(); //Pula Linha

  delay(500);  // Delay para ajudar na visibilidade das leitura
}
*/

