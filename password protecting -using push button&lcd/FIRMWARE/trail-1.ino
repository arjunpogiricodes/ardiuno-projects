#include <LiquidCrystal.h>
#include <String.h>
int zero=0,one=1,two=2,three=3,four=4,five=5,six=6,seven=7,eight=8,nine=9;
int num=0;
const int rs = 12, en = 11, d4 = A4, d5 = A3, d6 = A2, d7 = A1;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const String password="6";
String input_password;

void setup() {
  lcd.begin(16,2);
  for(int i=0;i<10;i++)
  {
    pinMode(i,INPUT);
  }
 input_password.reserve(8); 
 }

void loop() {
  lcd.setCursor(0, 0);
lcd.print("EnterUnlockCode");
while(num==0)
{
 for(int j=0;j<10;j++)
  {
  if(digitalRead(j)==HIGH)
  {
    lcd.setCursor(3,1);
    lcd.print(j);
    num=num+1;
    while(num==1)
  { 
  for(int k=0;k<10;k++)
  {
   if(digitalRead(k)==HIGH)
  {
     lcd.setCursor(5,1);
    lcd.print(k);
    num=num+1;
    while(num==2)
  {
  for(int m=0;m<10;m++)
  {
  if(digitalRead(m)==HIGH)
  {
     lcd.setCursor(7,1);
    lcd.print(m);
    num=num+1;
   
  while(num==3)
  {
   for(int n=0;n<10;n++)
  {
  if(digitalRead(n)==HIGH)
  {
     lcd.setCursor(9,1);
    lcd.print(n);
    num=0; 
    break;
    
   
    }
    
  }
  }
    
   
    }
    
  }
  }
   
 
    }
    }
   
  }
 
}

}
}
  
  
 

  
  }
