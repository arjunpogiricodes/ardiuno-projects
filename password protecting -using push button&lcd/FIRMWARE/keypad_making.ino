#include<math.h>
const int zero = 13;
const int one = 12;
const int two = 11;
const int three = 10;
const int four = 9;
const int five = 8;
const int six = 7;
const int seven = 6;
const int eight = 5;
const int nine = 4;
const int Green_LED=2;
const int Red_LED=1;
const int Buzzer=0;
int pin;
const int User_Pin=1234; //Password 
int press_button()
{
  if(digitalRead(zero)||digitalRead(one)||digitalRead(two)||digitalRead(three)||digitalRead(four)||digitalRead(five)
  ||digitalRead(six)||digitalRead(seven)||digitalRead(eight)||digitalRead(nine)) 
  {
  return 1;
  }
  else
  {
    return 0;
  }
}
void setup() 

{
  pinMode(zero,INPUT);
  pinMode(one,INPUT);   
  pinMode(three,INPUT);
  pinMode(four,INPUT);
  pinMode(five,INPUT);
  pinMode(six,INPUT);
  pinMode(seven,INPUT);
  pinMode(eight,INPUT);             
  pinMode(nine,INPUT); 
  pinMode(Green_LED,OUTPUT); 
  pinMode(Red_LED,OUTPUT);
  pinMode(Buzzer,OUTPUT);   
}

void loop() 
{
  while(!press_button())
  {
        
  }
  int Final_Pin=0;
  for(int state=0;state<4;state++)
  {
    if(digitalRead(zero))
    {
      pin=0;              
    }  
    if(digitalRead(one))
    {
      pin=1;              
    }  
    if(digitalRead(two))
    {
      pin=2;              
    }  
    if(digitalRead(three))
    {
      pin=3;              
    } 
    if(digitalRead(four))
    {
      pin=4;              
    }  
    if(digitalRead(five))
    {
      pin=5;              
    }  
    if(digitalRead(six))
    {
      pin=6;              
    }  
    if(digitalRead(seven))
    {
      pin=7;              
    }  
    if(digitalRead(eight))
    {
      pin=8;              
    }  
    if(digitalRead(nine))
    {
      pin=9;              
    }    
    Final_Pin=(Final_Pin*10)+pin;  //Generation of 4 digit pin from Single pins
    
  }
  if(Final_Pin==User_Pin)
  {
    digitalWrite(Green_LED,HIGH);
    delay(3000);
    digitalWrite(Green_LED,LOW);    
    
  }
  else
  {
    digitalWrite(Red_LED,HIGH);
    digitalWrite(Buzzer,HIGH);
    delay(3000);
    digitalWrite(Red_LED,LOW);
    digitalWrite(Buzzer,LOW);    
  }
  

}
