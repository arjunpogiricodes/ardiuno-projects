#include<Servo.h>
int pos=0;
int pin=2;

Servo myservo;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
Serial.begin(9600);
myservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  
int ir=digitalRead(pin);
Serial.println(ir);
if(ir==0)
{
  myservo.write(180);
}
else
{
  myservo.write(0);
}
}
