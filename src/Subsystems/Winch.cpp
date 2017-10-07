#include "Winch.h"
#include "../RobotMap.h"
#include "Commands/WinchControl.h"

Winch::Winch() : frc::Subsystem("Winch") {

}

void Winch::InitDefaultCommand() {
	SetDefaultCommand(new WinchControl());
}

void Winch::Drive(double speed){
	motors->Set(speed);
}

void Winch::InitHardware(){
	motors = new Spark(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
