#include "CommandBase.h"

#include <Commands/Scheduler.h>

std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
std::unique_ptr<Drivetrain> CommandBase::drivetrain = std::make_unique<Drivetrain>();
std::unique_ptr<Winch> CommandBase::winch = std::make_unique<Winch>();
std::unique_ptr<Dropper> CommandBase::dropper = std::make_unique<Dropper>();

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}
