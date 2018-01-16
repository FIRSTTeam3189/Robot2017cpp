 #ifndef DriveTrain_H
#define DriveTrain_H

#include <AnalogGyro.h>
#include <AnalogInput.h>
#include <Commands/Subsystem.h>
#include <Encoder.h>
#include <RobotDrive.h>
#include <ctre/phoenix/MotorControl/CAN/TalonSRX.h>
#include <ctre/phoenix/MotorControl/ControlMode.h>
#include "RobotMap.h"

/**
 * The DriveTrain subsystem incorporates the sensors and actuators attached to
 * the robots chassis. These include four drive motors, a left and right encoder
 * and a gyro.
 */
class Drivetrain: public frc::Subsystem {
public:
	Drivetrain();

	/**
	 * When no other command is running let the operator drive around
	 * using the PS3 joystick.
	 */
	void InitDefaultCommand() override;

	/**
	 * The log method puts interesting information to the SmartDashboard.
	 */
	void Log();

	/**
	 * Tank style driving for the DriveTrain.
	 * @param left Speed in range [-1,1]
	 * @param right Speed in range [-1,1]
	 */
	void Drive(double left, double right);

	/**
	 * Stops all motors
	 */
	void Stop();

	/**
	 * returns the gyro stuff
	 */
	double GetHeading();

	/**
	 * Reset the robots sensors to the zero states.
	 */
	void Reset();

	/**
	 * @return The distance driven (average of left and right encoders).
	 */
	double GetDistance();

	/**
	 * @return The distance to the obstacle detected by the rangefinder.
	 */
	double GetDistanceToObstacle();

	void InitHardware();

private:
	ctre::phoenix::motorcontrol::can::TalonSRX* frontLeft;
	ctre::phoenix::motorcontrol::can::TalonSRX* middleLeft;
	ctre::phoenix::motorcontrol::can::TalonSRX* rearLeft;
	ctre::phoenix::motorcontrol::can::TalonSRX* frontRight;
	ctre::phoenix::motorcontrol::can::TalonSRX* middleRight;
	ctre::phoenix::motorcontrol::can::TalonSRX* rearRight;
	//frc::Encoder leftEncoder { 1, 2 };
	//frc::Encoder rightEncoder { 3, 4 };
	//frc::AnalogInput rangefinder { 6 };
	//frc::AnalogGyro gyro { 1 };
};

#endif  // DriveTrain_H
