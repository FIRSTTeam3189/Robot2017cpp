#include <LiveWindow/LiveWindow.h>
#include <Subsystems/Dropper.h>
#include "Piston.h"

Dropper::Dropper() :
	frc::Subsystem("Dropper") {
}

void Dropper::InitDefaultCommand() {

}

void Dropper::Open() {
	piston->Extend();
}

void Dropper::Close() {
	piston->Retract();
}

bool Dropper::IsGripping() {
	return piston->IsRetracted();
}

void Dropper::InitHardware(){
	piston = new Piston(CLAW_EXTEND, CLAW_RETRACT, true);
}

void Dropper::Log() {
	//frc::SmartDashboard::PutBoolean("Claw Open", piston->IsExtended());
}
