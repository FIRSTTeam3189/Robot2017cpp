#include "WinchControl.h"

WinchControl::WinchControl() :
	CommandBase("WinchControl"){
	Requires(winch.get());
}

// Called just before this Command runs the first time
void WinchControl::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void WinchControl::Execute() {
	winch->Drive(oi->GetCoPilotY());
}

// Make this return true when this Command no longer needs to run execute()
bool WinchControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void WinchControl::End() {
	winch->Drive(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WinchControl::Interrupted() {

}
