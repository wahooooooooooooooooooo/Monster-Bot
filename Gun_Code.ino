/* Gun Code (Robotics for makers)
 *  By Alexander Alexandrov
 *  Green led on pin 10
 *  Orange led on pin 11
 *  Red led 1 on pin 12
 *  Red led 2 on pin 13
 *  Servo on pin 9
 */



#include <Servo.h>
int pos = 0;
Servo servo;

void setup() {
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 servo.attach(9);
}

void loop() {
  servo.write(0);
  digitalWrite(10, HIGH);
  delay(1500);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  servo.write(50);
  delay(750);
  servo.write(0);
  delay(500);
}
