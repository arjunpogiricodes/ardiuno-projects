int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;
int LED5=6;
int LED6=7;
int LED7=8;
int LED8=9;
int LED9=10;
int LED10=11;

  int count=0;
int button=12;
int i,j,k;
void setup() 
{
  
for(int i=2;i<=11;i++)
 {
  pinMode(i,OUTPUT);
  } 
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
}

void loop()
{
int state=digitalRead(button);

  if(state==1)
  {
    count++;
    delay(200);
   }
  else
  {
  count=count;
    delay(200);  
 
  }
if(count==1){
  
for(int i=2;i<=6;i++)
{
  digitalWrite(A0,HIGH);
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(6,HIGH);
}
if(count==2)  {  
for(int i=2;i<=5;i++)
{
  
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(5,HIGH);
}

if(count==3) {   
for(int i=2;i<=4;i++)
{
  
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(4,HIGH);
   
}   
if(count==4)   { 
for(int i=2;i<=3;i++)
{
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(3,HIGH);
}
if(count==5){  
  
for(int i=2;i<=2;i++)
{
  
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
   analogWrite(A1,HIGH);
   
    
   

if(count==5)    
for(int i=2;i<=1;i++)
{
  digitalWrite(A2,HIGH);
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(1,HIGH);
   
    
    analogWrite(A0,HIGH);
}
if(count==6){
  
for(int i=6;i<=11;i++)
{

    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(11,HIGH);
}
if(count==7) {   
for(int i=6;i<=10;i++)
{
  
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(10,HIGH);}
if(count==8)   { 
for(int i=6;i<=9;i++)
{
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(9,HIGH); } 
if(count==9){    
for(int i=6;i<=8;i++){
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(8,HIGH);
}
   if(count==10)  {  
for(int i=6;i<=7;i++)
{
  
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }
    digitalWrite(7,HIGH);
   }
if(count==11)   { 
for(int i=6;i<=6;i++)
{

    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    count==0;
    }
    digitalWrite(6,HIGH);
    analogWrite(A3,HIGH);
    }

}
