#ifndef TankDriveWithJoystick_H
#define TankDriveWithJoystick_H

#include <CommandBase.h>

class TankDriveWithJoystick: public CommandBase {
public:
	TankDriveWithJoystick();
	void Execute() override;
	bool IsFinished() override;
	void End() override;
};

#endif  // TankDriveWithJoystick_H
