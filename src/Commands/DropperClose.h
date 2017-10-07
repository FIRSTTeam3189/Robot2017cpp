#ifndef CloseClaw_H
#define CloseClaw_H

#include <CommandBase.h>

/**
 * Opens the claw for one second. Real robots should use sensors, stalling
 * motors is BAD!
 */
class DropperClose: public CommandBase {
public:
	DropperClose();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
};

#endif  // CloseClaw_H
