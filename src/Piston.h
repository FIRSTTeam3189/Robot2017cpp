#ifndef PISTON_H_
#define PISTON_H_

#include <Solenoid.h>

class Piston{
public:
	Piston(int extend_id, int retract_id, bool extended_on_start = false);
	void Retract();
	void Extend();
	bool Toggle();
	bool IsExtended();
	bool IsRetracted();

private:
	frc::Solenoid* extended;
	frc::Solenoid* retracted;
};

#endif  // PISTON_H_
