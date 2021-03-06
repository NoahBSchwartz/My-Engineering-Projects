#pragma config(Sensor, dgtl1,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  bumpSwitch1,    sensorTouch)
#pragma config(Sensor, dgtl4,  bumpSwitch2,    sensorTouch)
#pragma config(Sensor, dgtl5,  bumpSwitch3,    sensorTouch)
#pragma config(Sensor, dgtl10, led1,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, led2,           sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, led3,           sensorLEDtoVCC)
#pragma config(Motor,  port2,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Project Title: RobotC Test
Team Members: Noah Schwartz, Joey Holubek, Tristan Mandrey, Trevor Hadaway
Date: 4-19-21
Section: 3.1.2
*/


task main()
{
	while (1 == 1)
	{
			while (SensorValue(quad) > 100)
			{
				startMotor(rightMotor, -30);
				startMotor(leftMotor, -30);
			}
			stopMotor(rightMotor);
			stopMotor(leftMotor);
			turnLEDOn(led1);
			turnLEDOff(led2);
			turnLEDOff(led3);
		if ((SensorValue(bumpSwitch2) != 1) && (SensorValue(bumpSwitch3) != 1))
		{
			while (SensorValue(quad) != 1000)
			{
				if (SensorValue(quad) < 1000)
				{
					startMotor(rightMotor, 30);
					startMotor(leftMotor, 30);
				}
				else
				{
					startMotor(rightMotor, -30);
					startMotor(leftMotor, -30);
				}
				stopMotor(rightMotor);
				stopMotor(leftMotor);
			}
			turnLEDOff(led1);
			turnLEDOn(led2);
			turnLEDOff(led3);
		}
		if ((SensorValue(bumpSwitch1) != 1) && (SensorValue(bumpSwitch2) != 1))
		{
			while (SensorValue(quad) != 2000)
			{
					startMotor(rightMotor, 30);
					startMotor(leftMotor, 30);
			}
			stopMotor(rightMotor);
			stopMotor(leftMotor);
			turnLEDOff(led1);
			turnLEDOff(led2);
			turnLEDOn(led3);
		}
	}
}
