#include "Piston.h"

Piston::Piston(int extend_id, int retract_id, bool extended_on_start){
	extended = new Solenoid(extend_id);
	retracted = new Solenoid(retract_id);
	extended->Set(extended_on_start);
	retracted->Set(extended_on_start);
}

void Piston::Extend(){
	extended->Set(true);
	retracted->Set(false);
}

void Piston::Retract(){
	extended->Set(false);
	retracted->Set(true);
}

void Piston::Toggle(){
	extended->Set(!extended->Get());
	retracted->Set(!extended->Get());
}

bool Piston::IsExtended(){
	return extended->Get();
}

bool Piston::IsRetracted(){
	return retracted->Get();
}
