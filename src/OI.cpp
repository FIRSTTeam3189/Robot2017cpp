#include "OI.h"

#include <SmartDashboard/SmartDashboard.h>

#include "Commands/Autonomous.h"
#include "Commands/DropperClose.h"
#include "Commands/DropperOpen.h"

OI::OI() {
	copilot_2 = new JoystickButton(&copilot, 2);
	copilot_3 = new JoystickButton(&copilot, 3);

	copilot_2->WhenPressed(new DropperClose);
	copilot_3->WhenPressed(new DropperOpen);
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
