#include "PotatoDrive.h"
#include "../OI.h"
#include "CommandBase.h"
#include "../RobotMap.h"

PotatoDrive::PotatoDrive()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
    Requires (drivebase);

}

// Called just before this Command runs the first time
void PotatoDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PotatoDrive::Execute()
{
    double x = -oi->getJoyDrvY();
    double y = -oi->getJoyDrvX();
    double z = -oi->getJoyDrvZ();
    double throttle = -oi->getJoyDrvThrottle();

    drivebase->Drive(x,y,z,throttle,strafe_motor_ratio);
}

// Make this return true when this Command no longer needs to run execute()
bool PotatoDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PotatoDrive::End()
{
    drivebase->Drive(0.0,0.0,0.0,0.0,strafe_motor_ratio);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PotatoDrive::Interrupted()
{

}
