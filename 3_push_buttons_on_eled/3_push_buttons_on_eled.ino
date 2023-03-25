int button1=2;
int button2=3;
int button3=4;
int count=0;
int led=12;
int number=count;
void setup() {
  
pinMode(button1,INPUT);
pinMode(button2,INPUT);
pinMode(button3,INPUT);
pinMode(led,OUTPUT);
}

void loop()
{
 int state1=digitalRead(button1);
 /*if(state1==HIGH)
 {
 
  count++;
  number=count;
  while(digitalRead(button1))
  {}
 }
 int state2=digitalRead(button2);
 if(state2==HIGH)
 {
  for(int i=0;i<number+1;i++)
  {
   digitalWrite(led,HIGH);
   delay(300);
   digitalWrite(led,LOW);
    
    }*/
  if(state1==HIGH)
  {
    digitalWrite(led,HIGH);
    delay(400);
digitalWrite(led,LOW);
  delay(1000);
  
    
    }
 }
