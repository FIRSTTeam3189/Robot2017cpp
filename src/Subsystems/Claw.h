#ifndef Claw_H
#define Claw_H

#include <Commands/Subsystem.h>
#include <Talon.h>
#include <DigitalInput.h>
#include <AnalogPotentiometer.h>
#include "Piston.h"

class Claw : public Subsystem {
private:
	Piston* clawPiston;
	Talon* liftingMotor;
	DigitalInput* upperSwitch;
	DigitalInput* lowerSwitch;
	AnalogPotentiometer* potentiometer;

public:
	Claw();
	void InitDefaultCommand();
	/**
	 * sets the speed of the Lifter motor
	 * @param speed percentage of motor speed represented with a value between -1 and 1
	 * 		(zero being off, negitive being reverce)
	 */
	void SetLifterSpeed(double speed);
	/**
	 * closes the Claw.
	 */
	void Close();
	/**
	 * Opens the claw
	 */
	void Open();
	/**
	 * gets the lower limit switch value
	 * @return the State of the lower limit switch
	 */
	bool IsLowerLimit();
	/**
	 * gets the upper limit switch value
	 * @return the State of the upper limit switch
	 */
	bool IsUpperLimit();
	/**
	 * gets the value of the Potentiometer used with the lifting motor
	 * @return value of the Potentiometer represented with value between 0 and 1023
	 */
	double GetPot();
	/**
	 * returns if the claw is in the "Low" position, which is the gear pick up level
	 * @return is the Claw in the gear pick up position
	 */
	bool IsClawLow();
	/**
	 * returns if the claw is in the "Mid" position, which is the gear Hanging level
	 * @return is the Claw in the gear hang position
	 */
	bool IsClawMid();
	/**
	 * returns if the claw is in the "High" position, which is the Not in use level
	 * @return is the Claw in the Not in use position
	 */
	bool IsClawHigh();
	/**
	 * used for going to a specific potentiometer value with the claw using the lifter motor
	 * @param position the potentiometer value for the claw to go to.
	 */
	void SetClawPosition(double position);
	/**
	 * Smartdashboard and logging calls for debugging or real time data.
	 */
	void Log();
	/**
	 * needs to be called in RobotInit to initilize all of the hardware for this subsystem.
	 */
	void InitHardware();
};

#endif  // Claw_H
