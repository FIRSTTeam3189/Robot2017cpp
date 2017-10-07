#include "DriveTrain.h"

#include <Joystick.h>
#include <LiveWindow/LiveWindow.h>

#include "Commands/TankDriveWithJoystick.h"

DriveTrain::DriveTrain() :
	frc::Subsystem("DriveTrain") {
	frontLeft.SetInverted(true);
	middleLeft.SetInverted(true);
	rearLeft.SetInverted(true);
}

/**
 * When no other command is running let the operator drive around
 * using the PS3 joystick.
 */
void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new TankDriveWithJoystick());
}

/**
 * The log method puts interesting information to the SmartDashboard.
 */
void DriveTrain::Log() {
	//frc::SmartDashboard::PutNumber("Left Speed", leftEncoder.GetRate());
	//frc::SmartDashboard::PutNumber("Right Speed", rightEncoder.GetRate());
}

void DriveTrain::Drive(double left, double right) {
	frontLeft.Set(left);
	middleLeft.Set(left);
	rearLeft.Set(left);
	frontRight.Set(right);
	middleRight.Set(right);
	rearRight.Set(right);
}

void DriveTrain::Stop(){
	frontLeft.Set(0.0);
	middleLeft.Set(0.0);
	rearLeft.Set(0.0);
	frontRight.Set(0.0);
	middleRight.Set(0.0);
	rearRight.Set(0.0);
}

//NOT INMPLEMENTED
double DriveTrain::GetHeading() {
	return 0.0;
}

void DriveTrain::Reset() {
	/*gyro.Reset();
	leftEncoder.Reset();
	rightEncoder.Reset();*/
}

double DriveTrain::GetDistance() {
	return 0.0;//(leftEncoder.GetDistance() + rightEncoder.GetDistance()) / 2;
}

double DriveTrain::GetDistanceToObstacle() {
	// Really meters in simulation since it's a rangefinder...
	return 0.0;//rangefinder.GetAverageVoltage();
}
