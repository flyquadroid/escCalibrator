#include <Servo.h>
 
Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;
int throttlePin = 0;

int min = 50;
int max = 150;
 
void setup()
{
  delay(500);
  esc1.attach(8);
  esc2.attach(9);
  esc3.attach(10);
  esc4.attach(11);
  delay(200);
  esc1.write(max);
  esc2.write(max);
  esc3.write(max);
  esc4.write(max);
  delay(200);
  esc1.write(min);
  esc2.write(min);
  esc3.write(min);
  esc4.write(min);
  delay(200);
}
 
void loop()
{
  int throttle = analogRead(throttlePin);
  throttle = map(throttle, 0, 1023, min, max);
  esc1.write(throttle);
  esc2.write(throttle);
  esc3.write(throttle);
  esc4.write(throttle);
}
