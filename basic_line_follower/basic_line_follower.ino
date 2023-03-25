int lmp=6;
int lmn=9;
int rmp=3;
int rmn=5;
void setup() {
 // put your setup code here, to run once:
 
 pinMode(rmp,OUTPUT);
 pinMode(rmn,OUTPUT);
 pinMode(lmp,OUTPUT);
 pinMode(lmn,OUTPUT);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
}
void loop() {
int irleft=digitalRead(10);
int irright=digitalRead(11);
 if(irleft==1 && irright==1)
 {
analogWrite(rmp,225);
 analogWrite(rmn,0);
 analogWrite(lmp,225);
 analogWrite(lmn,0);
 }
 else if(irleft==1 && irright==0)
 {
analogWrite(rmp,0);
 analogWrite(rmn,0);
 analogWrite(lmp,197);
 analogWrite(lmn,0);
 }
 else if(irleft==0 && irright==1)
 {
analogWrite(rmp,197);
 analogWrite(rmn,50);
 analogWrite(lmp,0);
 analogWrite(lmn,0);
 }
 else if(irleft==0 && irright==0)
 {
analogWrite(rmp,225);
 analogWrite(rmn,0);
 analogWrite(lmp,225);
 analogWrite(lmn,0);
 }
}
