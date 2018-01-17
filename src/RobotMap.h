#ifndef ROBOTMAP_H
#define ROBOTMAP_H

constexpr int CLAW_EXTEND = 2;
constexpr int CLAW_RETRACT = 3;

constexpr int DRIVE_RIGHT_FRONT = 4;
constexpr int DRIVE_RIGHT_MIDDLE = 5;
constexpr int DRIVE_RIGHT_BACK = 6;
constexpr int DRIVE_LEFT_FRONT = 1;
constexpr int DRIVE_LEFT_MIDDLE = 2;
constexpr int DRIVE_LEFT_BACK = 3;

constexpr int CLAW_LIFTING_MOTOR = 1;
constexpr int WINCH_MOTOR_1 = 0;

constexpr int DROPPER_OPEN = 2;
constexpr int DROPPER_CLOSED = 3;
constexpr int GEARBOX_LOW = 0;
constexpr int GEARBOX_HIGH = 1;

// constexpr int ACCELEREMETER_PORT = 0;
constexpr int GYROSCOPE_PORT = 1;
constexpr int ULTRASONIC_PORT = 0;
constexpr int POTENTIOMETER_PORT = 2;

constexpr int UPPER_LIMIT_SWITCH = 0;
constexpr int LOWER_LIMIT_SWITCH = 1;

#endif  // ROBOTMAP_H
