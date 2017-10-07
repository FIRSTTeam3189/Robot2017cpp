#include "Subsystems/Claw.h"

#include <LiveWindow/LiveWindow.h>
#include "Piston.h"

Claw::Claw() :
	frc::Subsystem("Claw") {
}

void Claw::InitDefaultCommand() {

}

void Claw::Open() {
	piston.Extend();
}

void Claw::Close() {
	piston.Retract();
}

bool Claw::IsGripping() {
	return piston.IsRetracted();
}

void Claw::Log() {
	frc::SmartDashboard::PutBoolean("Claw Open", piston.IsExtended());
}
