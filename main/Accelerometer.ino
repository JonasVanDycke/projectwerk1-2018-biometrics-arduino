#include <Wire.h> // Must include Wire library for I2C
#include <SparkFun_MMA8452Q.h> // Includes the SFE_MMA8452Q library

MMA8452Q accel;

void setupAccelerometer()
{
  accel.init();
}

void getAcceleration(double & x, double & y, double & z)
{
  if (accel.available())
  {
    accel.read();
    x = accel.cx;
    y = accel.cy;
    z = accel.cz;
  }
}
