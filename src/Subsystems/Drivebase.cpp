#include "Drivebase.h"
#include "../RobotMap.h"
#include "Commands/PotatoDrive.h"

Drivebase::Drivebase() :
		Subsystem("Drivebase")
{
	motor_a = new Talon(FrontCenterMotor);
	motor_b = new Talon(LeftMotor);
	motor_c = new Talon(BackCenterMotor);
	motor_d = new Talon(RightMotor);
}

Drivebase::~Drivebase()
{
	delete motor_a;
	delete motor_b;
	delete motor_c;
	delete motor_d;
}

void Drivebase::Drive(double vX, double vY, double vZ, double Throttle, double k) {
    double mA;
    double mB;
    double mC;
    double mD;

    mA = 0 -vY -k * vZ;
    mB = vX + 0 -vZ;
    mC = 0 + vY - k * vZ;
    mD = -vX + 0 -vZ;

    double array [] = {mA, mB, mC, mD};
    double max;

    for (int i = 0; i <= 3; i+= 1)
    {
        if (abs(array[i]) > max)
        {
            max = abs(array[i]);
        }
    }
for (int i=0; i <= 3; i += 1)
{
    array [i] = array [i] * Throttle;

    }
    motor_a->Set(array[0]);
    motor_b->Set(array[1]);
    motor_c->Set(array[2]);
    motor_d->Set(array[3]);
}
void Drivebase :: InitDefaultCommand(){
    SetDefaultCommand (new PotatoDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
