#ifndef DRIVE_BASE_H
#define DRIVE_BASE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"


class Drivebase: public Subsystem
{
private:
	Talon* motor_a;
	Talon* motor_b;
	Talon* motor_c;
	Talon* motor_d;

public:
	Drivebase();
	~Drivebase();
	void Drive(double vX, double vY, double vR, double Throttle,double k);
	void InitDefaultCommand();
};
#endif
