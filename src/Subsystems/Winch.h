#ifndef Winch_H
#define Winch_H

#include <Commands/Subsystem.h>
#include <Spark.h>

class Winch : public Subsystem {
private:
	frc::Spark motors { 0 };

public:
	Winch();
	void InitDefaultCommand();
	void Drive(double speed);
};

#endif  // Winch_H
