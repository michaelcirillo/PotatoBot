#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;
const int LeftMotor = 1;
const int RightMotor = 3;
const int FrontCenterMotor = 0;
const int BackCenterMotor = 2;

#define JOY_DRV_DEAD_X 0.05
#define JOY_DRV_DEAD_Y 0.05
#define JOY_DRV_DEAD_Z 0.25

#define strafe_motor_ratio 1

#endif
