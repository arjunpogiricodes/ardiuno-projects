int state=12;
int state_2=13;
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int count=0;


void setup() {
  // put your setup code here, to run once:

 pinMode(12,INPUT);
 pinMode(13,INPUT);
 pinMode(a,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(c,OUTPUT);
 pinMode(d,OUTPUT);
 pinMode(e,OUTPUT);
 pinMode(f,OUTPUT);
 pinMode(g,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
int IR1=digitalRead(state);
int IR2=digitalRead(state_2);
if(IR1==0 && IR2==1)
{
if(IR1==1 && IR2==0)  
{
 count++;
 delay(507);
}
else
{
 count=count;  
}

 while(digitalRead(IR1))
 {
 }
if(IR1==1 &&IR2==0)
{if(IR1==0 &&IR2==1)
  
{
count--;
 delay(507);
}
else
{
count=count;
}
 while(digitalRead(IR2))
 {
 }
}
 if(count==0)//0
 {
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 //delay(507);
 }
 else if(count==1)//1
 {
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 //delay(507);
 }
else if(count==2)//2
 {
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,0);
 //delay(507);
 }
 else if(count==3)//3
 {
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 //delay(507);
 }
 else if(count==4)//4
 {
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
// delay(507);
 }
 else if(count==5)//5
 {
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
// delay(507);
 }
 
 else if(count==6)//6
 {
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 //delay(507);
 }
 else if(count==7)//7
 {
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 //delay(507);
 }
 else if(count==8)//8
 {
  digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
// delay(507);
 }
else if(count==9)//9
 {
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
 //delay(1000);
 count=0;
 }
else if(count<=0)
 {
 count=0;
 }
 
 }
  
  }
