/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo hand;  // create servo object to control a servo
Servo rotaWrist;  // create servo object to control a servo
Servo wrist;  // create servo object to control a servo
Servo elbow;  // create servo object to control a servo
Servo shoulder;  // create servo object to control a servo
Servo rotaShoulder;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int joint = 0;
Servo jointure[6] = {hand,rotaWrist,wrist,elbow,shoulder,rotaShoulder};

void setup() {
  hand.attach(11);
  rotaWrist.attach(10);
  wrist.attach(9);
  elbow.attach(6);
  shoulder.attach(5);
  rotaShoulder.attach(3);
}

void loop()
{
  for (joint = 0; joint < 6; joint += 1)
  {
    for (pos = 0; pos <= 180; pos += 1)
    { // goes from 0 degrees to 180 degrees
      // in steps of 1 degree
      jointure[joint].write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 1)
    { // goes from 180 degrees to 0 degrees
      jointure[joint].write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
  }
}
