#ifndef Winch_H
#define Winch_H

#include <Commands/Subsystem.h>
#include <Spark.h>

class Winch : public Subsystem {
private:
	frc::Spark* motors;

public:
	Winch();
	void InitDefaultCommand();
	void Drive(double speed);
	void InitHardware();
};

#endif  // Winch_H
