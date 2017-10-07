#include <Joystick.h>
#include <LiveWindow/LiveWindow.h>
#include <Subsystems/Drivetrain.h>

#include "Commands/TankDriveWithJoystick.h"
#include "RobotMap.h"

Drivetrain::Drivetrain() :
	frc::Subsystem("DriveTrain") {

}

/**
 * When no other command is running let the operator drive around
 * using the PS3 joystick.
 */
void Drivetrain::InitDefaultCommand() {
	SetDefaultCommand(new TankDriveWithJoystick());
}

/**
 * The log method puts interesting information to the SmartDashboard.
 */
void Drivetrain::Log() {
	//frc::SmartDashboard::PutNumber("Left Speed", leftEncoder.GetRate());
	//frc::SmartDashboard::PutNumber("Right Speed", rightEncoder.GetRate());
}

void Drivetrain::Drive(double left, double right) {
	frontLeft->Set(left);
	middleLeft->Set(left);
	rearLeft->Set(left);
	frontRight->Set(right);
	middleRight->Set(right);
	rearRight->Set(right);
}

void Drivetrain::Stop(){
	frontLeft->Set(0.0);
	middleLeft->Set(0.0);
	rearLeft->Set(0.0);
	frontRight->Set(0.0);
	middleRight->Set(0.0);
	rearRight->Set(0.0);
}

//NOT INMPLEMENTED
double Drivetrain::GetHeading() {
	return 0.0;
}

void Drivetrain::Reset() {
	/*gyro.Reset();
	leftEncoder.Reset();
	rightEncoder.Reset();*/
}

double Drivetrain::GetDistance() {
	return 0.0;//(leftEncoder.GetDistance() + rightEncoder.GetDistance()) / 2;
}

double Drivetrain::GetDistanceToObstacle() {
	// Really meters in simulation since it's a rangefinder...
	return 0.0;//rangefinder.GetAverageVoltage();
}

void Drivetrain::InitHardware(){
	frontLeft = new CANTalon(DRIVE_LEFT_FRONT);
	middleLeft = new CANTalon(DRIVE_LEFT_MIDDLE);
	rearLeft = new CANTalon(DRIVE_LEFT_BACK);
	frontRight = new CANTalon(DRIVE_RIGHT_FRONT);
	middleRight = new CANTalon(DRIVE_RIGHT_MIDDLE);
	rearRight = new CANTalon(DRIVE_RIGHT_BACK);

	frontLeft->SetInverted(true);
	middleLeft->SetInverted(true);
	rearLeft->SetInverted(true);
}
