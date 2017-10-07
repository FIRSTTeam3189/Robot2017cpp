#include <Commands/DropperOpen.h>

DropperOpen::DropperOpen() :
	CommandBase("DropperOpen") {
	Requires(dropper.get());
}

// Called just before this Command runs the first time
void DropperOpen::Initialize() {
	dropper->Open();
}

// Make this return true when this Command no longer needs to run execute()
bool DropperOpen::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void DropperOpen::End() {

}
