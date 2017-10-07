#include "Winch.h"
#include "../RobotMap.h"
#include "Commands/WinchControl.h"

Winch::Winch() : frc::Subsystem("ExampleSubsystem") {

}

void Winch::InitDefaultCommand() {
	SetDefaultCommand(new WinchControl());
}

void Winch::Drive(double speed){
	motors.Set(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
