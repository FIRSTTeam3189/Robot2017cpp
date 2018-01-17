#ifndef GearBox_H
#define GearBox_H

#include <Commands/Subsystem.h>
#include "Piston.h"

class GearBox : public Subsystem {
private:
	Piston* piston;

public:
	GearBox();
	void InitDefaultCommand();
	/**
	 * Shifts into the High gear
	 */
	void ShiftHigh();
	/**
	 * Shifts into the Low gear
	 */
	void ShiftLow();
	/**
	 * changes the current gear
	 */
	void ToggleGear();
};

#endif  // GearBox_H
