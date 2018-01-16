#ifndef CONSTANT_H
#define CONSTANT_H

constexpr double VISION_OFFSET = 1.0;
constexpr int VISION_PICTURE_WIDTH = 640;

constexpr double AUTO_FORWARD_SPEED = 0.35;
constexpr double AUTO_REVERSE_SPEED = 0.4;

constexpr double GYRO_SPEED_MULTIPLIER = .50;

constexpr double tuneP = 0.01;
constexpr double tuneI = 0.001;
constexpr double tuneD = 0.01;

constexpr double AUTO_ANGLE_OFF = 10;

constexpr double AUTO_STOP_DISTANCE = 12;
constexpr double AUTO_STOP_LEFT = 15; // same as first
constexpr double AUTO_STOP_RIGHT = 15; // same as second
constexpr double AUTO_DRIVE_SPEED = 0.35; // needs testing and
													// stuff as well

constexpr double AUTO_VISION_SPEED = 0.30;
constexpr double AUTO_VISION_RANGE = 10;

constexpr double HFC = 0.90;
constexpr double LFC = 0.98;
constexpr double SPEED_DIV = 46; // I don't know what this is

constexpr double INCHES_PER_ROTATION = 6;
constexpr int ENCODER_ACCURACY = 4;
constexpr double LOW_GEARING_RATIO = 2.16;
constexpr double HIGH_GEARING_RATIO = 3.68;

constexpr double CLAW_LOWER_SPEED = -0.5;
constexpr double CLAW_RAISE_SPEED = 0.5;
constexpr double CLIMB_SPEED = 0.85;

constexpr double ENCODER_TICKS_PER_INCH = 160;

constexpr double POTENTIOMETER_TOP = 484;
constexpr double POTENTIOMETER_MIDDLE = 508;
constexpr double POTENTIOMETER_BOTTOM = 596;
constexpr double CLAW_DOWN_SPEED = 0.3;
constexpr double CLAW_UP_SPEED = 0.4;
constexpr double DROPPER_OPEN_DELAY = 0.25;
constexpr double CLAW_POT_RANGE = 10;

#endif  // CONSTANT_H
