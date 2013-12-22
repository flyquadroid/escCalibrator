ESC Calibration
==============

Small script to calibrate your ESC's with Arduino and rotary potentiometer.

## Prerequirements

The script makes use of [Arduino Servo library](http://arduino.cc/de/Reference/Servo). This library allows an Arduino board to control not only RC servo motors but also brushless motors. To achieve the right PWM signal, we have to set values in the range between of `0`and `180`.

## Wiring

IMPORTANT: TAKE CARE OF CATHODE AND ANODE WIRING BETWEEN BATTERY AND ESC's

In this example we used a [quadcopter](http://www.quadroid.io) with therefore four electronic speed controls. On the Arduino, PWM Pin 8 to 11 are used to send PWM signals to ESC's. Analog Pin 1 is used to read value of rotary potentiometer.

![Arduino sketch](https://raw.github.com/flyquadroid/escCalibration/master/res/sketch.png)

## Usage

Specify the throttle range by setting `MIN` and `MAX` values. For ESC calibration we have to do the following steps:
* Power up ESC's while fully opened rotary potentiometer
* Now you should hear the initiation beeps and after usually 2 seconds, you'll hear a confirmation beep
* Set rotary potentiometer to zero and wait until confirmation beep occured
* Have fun!
