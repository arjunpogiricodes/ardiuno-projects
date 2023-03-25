int lmp=6;
int lmn=9;
int rmp=3;
int rmn=5;
int count=0;
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
 count++;
 if(count==1 || count==2)
 {
 analogWrite(rmp,207);
 analogWrite(rmn,0);
 analogWrite(lmp,207);
 analogWrite(lmn,0);
 }
 else if(count==3 || count==4)
 {
 analogWrite(rmp,207);
 analogWrite(rmn,0);
 analogWrite(lmp,0);
 analogWrite(lmn,0);
 count=1;
 }
 }
 else if(irleft==1 && irright==0)
 {analogWrite(rmp,197);
 analogWrite(rmn,0);
 analogWrite(lmp,0);
 analogWrite(lmn,0);
 }
 else if(irleft==0 && irright==1)
 {analogWrite(rmp,0);
 analogWrite(rmn,0);
 analogWrite(lmp,207);
 analogWrite(lmn,0);
 }
 else if(irleft==0 && irright==0)
 {analogWrite(rmp,207);
 analogWrite(rmn,0);
 analogWrite(lmp,207);
 analogWrite(lmn,0);
 }
}
