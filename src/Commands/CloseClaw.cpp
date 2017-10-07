#include "CloseClaw.h"

#include "Robot.h"

CloseClaw::CloseClaw() :
		frc::Command("CloseClaw") {
	Requires(Robot::claw.get());
}

// Called just before this Command runs the first time
void CloseClaw::Initialize() {
	Robot::claw->Close();
}

// Make this return true when this Command no longer needs to run execute()
bool CloseClaw::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CloseClaw::End() {
}
