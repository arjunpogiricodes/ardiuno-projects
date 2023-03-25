int lmp=6;
int lmn=9;
int rmp=3;
int rmn=5;
int trigPin=12;
int echoPin=13;
String value=" ";
void stop();
void setup() {
 // put your setup code here, to run once:
 
 pinMode(rmp,OUTPUT);
 pinMode(rmn,OUTPUT);
 pinMode(lmp,OUTPUT);
 pinMode(lmn,OUTPUT);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
 Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 long duration=pulseIn(echoPin,HIGH);
 long distance=duration*0.034/2;
 if (distance>10)
 {
 if (value=Serial.available()>0)
 {
 value=Serial.readString();
 Serial.print(value);
if (value=="forward")
 {digitalWrite(rmp,1);
 digitalWrite(rmn,0);
 digitalWrite(lmp,1);
 digitalWrite(lmn,0);
 delay(1000);
stop();
 }
 else if (value=="backward")
 {digitalWrite(rmp,0);
 digitalWrite(rmn,1);
 digitalWrite(lmp,0);
 digitalWrite(lmn,1);
 delay(1000);
 stop();
 }
 else if (value=="left")
 {digitalWrite(rmp,0);
 digitalWrite(rmn,0);
 digitalWrite(lmp,1);
 digitalWrite(lmn,0);
 }
 else if (value=="right")
 {digitalWrite(rmp,1);
 digitalWrite(rmn,0);
 digitalWrite(lmp,0);
 digitalWrite(lmn,0);
 }
 else 
 {
  
 digitalWrite(rmp,0);
 digitalWrite(rmn,0);
 digitalWrite(lmp,1);
 digitalWrite(lmn,0);
 
 }
}
 }
void stop()

(
digitalWrite(rmp,0);
digitalWrite(rmn,0);
digitalWrite(lmp,0);
digitalWrite(lmn,0);
 )}
