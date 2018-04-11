//https://www.youtube.com/watch?v=DsTa366PIKg
void Accelerometer(){
  
  if (accel.available()) {
    accel.read();
    printCalculatedAccels();
    printOrientation();
    Serial.println();
  }
  
  
  
  
  
  
  
  
  /*
  int acelCont[3];  // Váriável que armazena os valores das leituras de 12-bit
  readAccelData(acelCont);  // Leitura de todos os eixos do sensor
  float acelG[3];  // Variável para armazenar os valores da aceleração em g (9,8 m/s²)

  // Calcula a aceleração e separa na matriz acelG
  for (int i = 0 ; i < 3 ; i++)
  {
    acelG[i] = (float) acelCont[i] / ((1<<12)/(2*GSCALE));  // Pega o valor da e 
  }

  // Imprimi os valores na Serial
  for (int i = 0 ; i < 3 ; i++)
  {
    Serial.print(acelG[i], 4);  // Imprime os valores de cada eixo na serial (XYZ)
    Serial.print("\t");  // Tabulação entre as leituras
    lcd.setCursor(0,0);
    lcd.print(acelG[i], 4);
  }
  Serial.println(); //Pula Linha

  delay(500);  // Delay para ajudar na visibilidade das leitura
  */
}

