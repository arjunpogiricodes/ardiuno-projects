#include<Servo.h>
Servo myservo;
int tripin=9;
int echopin=10;
long distance;
long duration;

void setup() {
  // put your setup code here, to run once:
pinMode(tripin,OUTPUT);
pinMode(echopin,INPUT);
myservo.attach(9);
myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite((tripin.LOW));
delayMicroseconds(2);
digitalWrite(tripin,HIGH);
delayMicroseconds(10);
duration=pulseIn(echopin,HIGH);
distance=duration*0.034/2;
if (distance<40)
{
  myservo.write(90);
}
else
{
  myservo.write(0);
  }

}
