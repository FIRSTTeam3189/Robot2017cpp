#include "OI.h"

#include <SmartDashboard/SmartDashboard.h>

#include "Commands/Autonomous.h"
#include "Commands/CloseClaw.h"
#include "Commands/OpenClaw.h"

OI::OI() {
}

double OI::GetLeftY(){
	return left.GetY(frc::GenericHID::JoystickHand::kLeftHand);
}

double OI::GetRightY(){
	return right.GetY(frc::GenericHID::JoystickHand::kRightHand);
}

double OI::GetCoPilotY(){
	return copilot.GetY(frc::GenericHID::JoystickHand::kRightHand) + copilot.GetY(frc::GenericHID::JoystickHand::kLeftHand);
}
