#include <Servo.h>
 
#define MIN 50
#define MAX 150
 
Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;
int throttlePin = 0;
 
void setup()
{
  delay(500);
  esc1.attach(8);
  esc2.attach(9);
  esc3.attach(10);
  esc4.attach(11);
  delay(200);
  esc1.write(MAX);
  esc2.write(MAX);
  esc3.write(MAX);
  esc4.write(MAX);
  delay(200);
  esc1.write(MIN);
  esc2.write(MIN);
  esc3.write(MIN);
  esc4.write(MIN);
  delay(200);
}
 
void loop()
{
  int throttle = analogRead(throttlePin);
  throttle = map(throttle, 0, 1023, MIN, MAX);
  esc1.write(throttle);
  esc2.write(throttle);
  esc3.write(throttle);
  esc4.write(throttle);
}
