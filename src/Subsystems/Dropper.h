#ifndef Claw_H
#define Claw_H

#include <Commands/Subsystem.h>
#include <DigitalInput.h>
#include <Victor.h>
#include "RobotMap.h"
#include "Piston.h"

/**
 * The claw subsystem is a simple system with a motor for opening and closing.
 * If using stronger motors, you should probably use a sensor so that the
 * motors don't stall.
 */
class Dropper: public frc::Subsystem {
public:
	Dropper();

	void InitDefaultCommand() override;

	/**
	 * Set the claw motor to move in the open direction.
	 */
	void Open();

	/**
	 * Set the claw motor to move in the close direction.
	 */
	void Close();

	/**
	 * Return true when the robot is grabbing an object hard enough
	 * to trigger the limit switch.
	 */
	bool IsGripping();

	void InitHardware();

	void Log();

private:
	Piston* piston;
};

#endif  // Claw_H
