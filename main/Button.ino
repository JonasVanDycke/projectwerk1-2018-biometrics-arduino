#define Rbase ((unsigned long)47)
#define Rup ((unsigned long)75)  
#define Rdown  ((unsigned long)62) 
#define Rleft  ((unsigned long)47)  
#define Rright ((unsigned long)39)  
#define Rselect  ((unsigned long)28) 
 
int sensorValue ;
int KeyTable[31];

void Button()
{
  GenerateKeyTable(analogRead(A0),KeyTable);
}

void GenerateKeyTable(int vcc,int* array)
{
  float resistor;
 
  resistor = ((float)Rup)/(Rbase + Rup);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rdown)/(Rbase + Rdown);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rleft)/(Rbase + Rleft);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rright)/(Rbase + Rright);
  *array++ = resistor*vcc;
 
  resistor = ((float)Rselect)/(Rbase + Rselect);
  *array++ = resistor*vcc;
}
