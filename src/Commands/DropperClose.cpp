#include <Commands/DropperClose.h>

DropperClose::DropperClose() :
	CommandBase("DropperClose") {
	Requires(dropper.get());
}

// Called just before this Command runs the first time
void DropperClose::Initialize() {
	dropper->Close();
}

// Make this return true when this Command no longer needs to run execute()
bool DropperClose::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void DropperClose::End() {
}
