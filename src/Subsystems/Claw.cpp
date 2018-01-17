#include "Claw.h"
#include "../RobotMap.h"
#include <math.h>
#include "RobotConfig.h"
#include "Constants.h"

Claw::Claw() : Subsystem("ExampleSubsystem") {

}

void Claw::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Claw::SetLifterSpeed(double speed){
	liftingMotor->Set(speed);
}

void Claw::Close(){
	clawPiston->Retract();
}

void Claw::Open(){
	clawPiston->Extend();
}

bool Claw::IsLowerLimit(){
	return lowerSwitch->Get();
}

bool Claw::IsUpperLimit(){
	return upperSwitch->Get();
}

double Claw::GetPot(){
	return potentiometer != NULL ? (!POT_REVERSE ? potentiometer->Get() : abs(potentiometer->Get() - 1024)) : -1.0D;
}

bool Claw::IsClawLow(){
	double pot = GetPot();
	//These magic numbers are the Lowest and highest values of the AnalogPotentiometer
	if(pot < 0 || pot > 1023)
		return false;
	return pot >= POTENTIOMETER_BOTTOM - CLAW_POT_RANGE && pot <= POTENTIOMETER_BOTTOM + CLAW_POT_RANGE;
}

bool Claw::IsClawMid(){
	double pot = GetPot();
	//These magic numbers are the Lowest and highest values of the AnalogPotentiometer
	if(pot < 0 || pot > 1023)
		return false;
	return pot >= POTENTIOMETER_MIDDLE - CLAW_POT_RANGE && pot <= POTENTIOMETER_MIDDLE + CLAW_POT_RANGE;
}

bool Claw::IsClawHigh(){
	double pot = GetPot();
	//These magic numbers are the Lowest and highest values of the AnalogPotentiometer
	if(pot < 0 || pot > 1023)
		return false;
	return pot >= POTENTIOMETER_TOP - CLAW_POT_RANGE && pot <= POTENTIOMETER_TOP + CLAW_POT_RANGE;
}

void Claw::SetClawPosition(double position){
	double pot = GetPot();
	//These magic numbers are the Lowest and highest values of the AnalogPotentiometer
	if(pot < 0 || pot > 1023)
		SetLifterSpeed(0);
		return;
	if (pot > position + CLAW_POT_RANGE) {
		SetLifterSpeed(CLAW_UP_SPEED);
	} else if (pot < position - CLAW_POT_RANGE) {
		SetLifterSpeed(-CLAW_DOWN_SPEED);
	} else {
		SetLifterSpeed(0);
	}
}

void Claw::Log(){

}

void Claw::InitHardware(){
	clawPiston = new Piston(CLAW_EXTEND, CLAW_RETRACT, false);
	liftingMotor = new Talon(CLAW_LIFTING_MOTOR);
	upperSwitch = new DigitalInput(UPPER_LIMIT_SWITCH);
	lowerSwitch = new DigitalInput(LOWER_LIMIT_SWITCH);
	potentiometer = new AnalogPotentiometer(POTENTIOMETER_PORT, 1023, 0);
}
