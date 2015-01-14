#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/Drivebase.h"

// Initialize a single static instance of all of your subsystems to NULL
Drivebase* CommandBase::drivebase = NULL;
OI* CommandBase::oi = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drivebase = new Drivebase();

	oi = new OI();
}
