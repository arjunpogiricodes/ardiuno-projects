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
 {digitalWrite(rmp,1);
 digitalWrite(rmn,0);
 digitalWrite(lmp,1);
 digitalWrite(lmn,0);
 }
 else if(irleft==0 && irright==1)
 {digitalWrite(rmp,1);
 digitalWrite(rmn,0);
 digitalWrite(lmp,0);
 digitalWrite(lmn,0);
 }
 else if(irleft==1 && irright==0)
 {digitalWrite(rmp,0);
 digitalWrite(rmn,0);
 digitalWrite(lmp,1);
 digitalWrite(lmn,0);
 }
 else if(irleft==0 && irright==0)
 {digitalWrite(rmp,0);
 digitalWrite(rmn,0);
 digitalWrite(lmp,0);
 digitalWrite(lmn,0);
 }
}
