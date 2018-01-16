#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include <Commands/Command.h>
#include <Subsystems/Dropper.h>

#include "OI.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/Winch.h"

class CommandBase: public frc::Command {
public:
	CommandBase(const std::string& name);
	CommandBase() = default;

	static std::unique_ptr<Drivetrain> drivetrain;
	static std::unique_ptr<Winch> winch;
	static std::unique_ptr<OI> oi;
	static std::unique_ptr<Dropper> dropper;
};

#endif  // COMMAND_BASE_H
