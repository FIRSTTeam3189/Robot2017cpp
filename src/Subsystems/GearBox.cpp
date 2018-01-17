#include "GearBox.h"
#include "../RobotMap.h"

GearBox::GearBox() : Subsystem("GearBox") {

}

void GearBox::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void GearBox::ShiftHigh(){
	piston->Extend();
}

void GearBox::ToggleGear(){
	piston->Toggle();
}

void GearBox::ShiftLow(){
	piston->Retract();
}
