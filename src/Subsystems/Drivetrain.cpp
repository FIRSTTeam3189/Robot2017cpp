#include <Joystick.h>
#include <LiveWindow/LiveWindow.h>
#include <Subsystems/Drivetrain.h>
#include <iostream>

#include "Commands/TankDriveWithJoystick.h"
#include "RobotMap.h"

Drivetrain::Drivetrain() :
	frc::Subsystem("Drivetrain") {

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
	frontLeft->Set(ControlMode::PercentOutput, left);
	middleLeft->Set(ControlMode::PercentOutput, left);
	rearLeft->Set(ControlMode::PercentOutput, left);
	frontRight->Set(ControlMode::PercentOutput, right);
	middleRight->Set(ControlMode::PercentOutput, right);
	rearRight->Set(ControlMode::PercentOutput, right);
}

void Drivetrain::Stop(){
	frontLeft->Set(ControlMode::PercentOutput, 0.0);
	middleLeft->Set(ControlMode::PercentOutput, 0.0);
	rearLeft->Set(ControlMode::PercentOutput, 0.0);
	frontRight->Set(ControlMode::PercentOutput, 0.0);
	middleRight->Set(ControlMode::PercentOutput, 0.0);
	rearRight->Set(ControlMode::PercentOutput, 0.0);
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
	frontLeft = new TalonSRX(DRIVE_LEFT_FRONT);
	middleLeft = new TalonSRX(DRIVE_LEFT_MIDDLE);
	rearLeft = new TalonSRX(DRIVE_LEFT_BACK);
	frontRight = new TalonSRX(DRIVE_RIGHT_FRONT);
	middleRight = new TalonSRX(DRIVE_RIGHT_MIDDLE);
	rearRight = new TalonSRX(DRIVE_RIGHT_BACK);

	frontLeft->SetInverted(true);
	middleLeft->SetInverted(true);
	rearLeft->SetInverted(true);
}
