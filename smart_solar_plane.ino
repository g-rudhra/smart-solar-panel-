#include <Servo.h>
Servo servo ;

int eastLDR = 0;
int westLDR = 1;
int east = 0;
int west = 0;
int error = 0;
int calibration = 600;
int servoposition = 90;

void setup()
{
  servo.attach(9);
  Serial.begin(9600);
}

void loop(){

  east = analogRead(eastLDR);
  west = analogRead(westLDR);
  Serial.print("EAST"); Serial.print("\t");
  Serial.println(east);
  Serial.print("WEST"); Serial.print("\t");
  Serial.println(west);

  if (east > 600 && west > 600)
  {
	  while (servoposition <= 130)
    {
  	servoposition++;
  	servo.write(servoposition);
  	delay(50);
	  }
  }
  error = east - west;
  if (error > 15)
  {
	  if (servoposition >= 30)
	  {
  	servoposition--;
  	servo.write(servoposition);
	  }
  }
  else if (error < -15)
  {
	if (servoposition <= 130)
	  {
  	servoposition++;
  	servo.write(servoposition);
	  }
  }
  delay(50);
}




