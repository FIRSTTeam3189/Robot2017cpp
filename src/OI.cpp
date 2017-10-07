#include "OI.h"

#include <SmartDashboard/SmartDashboard.h>

#include "Commands/Autonomous.h"
#include "Commands/CloseClaw.h"
#include "Commands/OpenClaw.h"

OI::OI() {
}

double OI::GetLeftY(){
	return left.GetY();
}

double OI::GetRightY(){
	return right.GetY();
}
