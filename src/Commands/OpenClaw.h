#ifndef OpenClaw_H
#define OpenClaw_H

#include <CommandBase.h>

/**
 * Opens the claw for one second. Real robots should use sensors, stalling
 * motors is BAD!
 */
class OpenClaw: public CommandBase {
public:
	OpenClaw();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
};

#endif  // OpenClaw_H
