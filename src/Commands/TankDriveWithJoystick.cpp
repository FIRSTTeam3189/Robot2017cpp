#include <iostream>
#include "TankDriveWithJoystick.h"

TankDriveWithJoystick::TankDriveWithJoystick() :
	CommandBase("TankDriveWithJoystick") {
	Requires(drivetrain.get());
}

// Called repeatedly when this Command is scheduled to run
void TankDriveWithJoystick::Execute() {
	std::cout << "Right: " << oi->GetRightY() << " Left: " << oi->GetLeftY() << std::endl;
	drivetrain->Drive(oi->GetLeftY(), oi->GetRightY());
}

// Make this return true when this Command no longer needs to run execute()
bool TankDriveWithJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDriveWithJoystick::End() {
	drivetrain->Stop();
}
