#ifndef OpenClaw_H
#define OpenClaw_H

#include <CommandBase.h>

/**
 * Opens the claw for one second. Real robots should use sensors, stalling
 * motors is BAD!
 */
class DropperOpen: public CommandBase {
public:
	DropperOpen();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
};

#endif  // OpenClaw_H
