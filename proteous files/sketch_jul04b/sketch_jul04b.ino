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
int green1=A1;
int blue1=A0;
int green2=A2;
int blue2=A3;
int button1=12;
int state1=0;
int count=0;
int i,j,k;
void setup() 
{
   pinMode(button1,INPUT);
   pinMode(blue1,OUTPUT);
pinMode(green1,OUTPUT);
pinMode(blue2,OUTPUT);
pinMode(green2,OUTPUT);
for(int i=2;i<=10;i++)
 {
  pinMode(i,OUTPUT);
  } 
}

void loop() {
    int state1=digitalRead(button1);
  if(state1==HIGH)
 {
 count++;
  delay(200);
 }

 if( count==1|count==2|count==3|count==4|count==5|count==6)
 {
 digitalWrite(green1,1);
 digitalWrite(blue1,0);
  
  for(int i=2;i>=6;i++)
 {
   
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i.LOW);
    }
    digitalWrite(i-1,HIGH);
    }
 
if( count==2|count==3|count==4|count==5|count==6)
 {

  
  for(int i=2;i>=5;i++)
 {
   
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i.LOW);
    }
    digitalWrite(i-1,HIGH);
    }
     if( count==3|count==4|count==5|count==6)
 {

  
  for(int i=2;i>=4;i++)
 {
   
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i.LOW);
    }
    digitalWrite(i-1,HIGH);
    }
 
if(count==4|count==5|count==6)
 {
   digitalWrite(green1,0);
  digitalWrite(blue1,1);  
  for(int i=7;i>=11;i++)
 {
   
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i.LOW);
    }
    digitalWrite(i-1,HIGH);
    }
if( count==5|count==6)
 {

  
  for(int i=7;i>=10;i++)
 {
   
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i.LOW);
    }
    digitalWrite(i-1,HIGH);
    }
if( count==6)
 {

  
  for(int i=7;i>=9;i++)
 {
   
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i.LOW);
    }
    digitalWrite(i-1,HIGH);
    }
if(count==7)
 {
   digitalWrite(green2,0);
  digitalWrite(blue2,1);
 }

 count=0;
    
}
