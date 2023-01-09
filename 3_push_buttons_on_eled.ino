int button1=2;
int button2=3;
int button3=4;
int count=0;
int led=12;
int number;
void arjun ()
{
  while(count<number)
  {
   digitalWrite(led,HIGH);
   delay(300);
   digitalWrite(led,LOW);
   number=count-1;
  }
}

void setup() {
  
pinMode(button1,INPUT);
pinMode(button2,INPUT);
pinMode(button3,INPUT);
pinMode(led,OUTPUT);
}

void loop()
{
 int state1=digitalRead(button1);
  if(state1==HIGH)

 {
 number=count+1;
 delay(100);
 }
 int state2=digitalRead(button2);


 
 
  if(state2==HIGH)
 {
  number;
 arjun();
    
 }
 
  
 
 
  
 }
