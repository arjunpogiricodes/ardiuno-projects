int led=10;
int count=1;
int reset=2;
int start=3;
int counter=0;
int state=0;
void setup() {
pinMode(led,OUTPUT);
pinMode(count,INPUT);
pinMode(reset,INPUT);
pinMode(start,INPUT);

}

void loop() {
 state=digitalRead(count);
 int state1=digitalRead(reset);
 int state2=digitalRead(start);
  if(state==HIGH)
  {
    counter=counter+1;
    delay(500);
   }

if(state1==HIGH)
{
  counter=0;   
}
 
 if(state2==HIGH)
 {
for(int i=0;counter>i;i++)
{
digitalWrite(led,HIGH);
delay(500);
digitalWrite(led,LOW);
delay(500);

}
}
else
{
  digitalWrite(led,LOW);
}
    
}
