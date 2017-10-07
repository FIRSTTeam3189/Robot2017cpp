#include "OpenClaw.h"

OpenClaw::OpenClaw() :
	CommandBase("OpenClaw") {
	//Requires(Robot::claw.get());
}

// Called just before this Command runs the first time
void OpenClaw::Initialize() {
	//Robot::claw->Open();
}

// Make this return true when this Command no longer needs to run execute()
bool OpenClaw::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void OpenClaw::End() {

}
