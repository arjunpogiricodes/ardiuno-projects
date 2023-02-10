#include <LiquidCrystal.h>
#include <EEPROM.h>
const int rs=9,  en =8, d4=7, d5=6,d6=5, d7=4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int count =0;
int good  =0;
int  bad  =0;
int  ir=A2;
int sum=0;
int button_good=3;
int button_bad =2; 
int button_reset =1; 


void setup() {
  
  lcd.begin(20,4);
  pinMode(button_good,INPUT);
  pinMode(button_bad,INPUT);
  pinMode(button_reset,INPUT);
  pinMode(ir,INPUT);
}

void loop() {
  int state1=digitalRead(button_good);
  int state2=digitalRead(button_bad);
  int state3=digitalRead(button_reset);
     if (ir=1 && (state1==HIGH || state2==HIGH ))
     {
      count=count+1;
      EEPROM.write(1,count);
      delay(400);
     
   
    if(state1==HIGH)
    {
      good=good+1;
      EEPROM.write(3,good);
      delay(70);
     }
     else
     {
      good=good;
      EEPROM.write(3,good);
     }
    if(state2==HIGH)
    {
      bad=bad+1;
      EEPROM.write(5,bad);
      delay(70);
     }
     else
     {
      bad=bad;
      EEPROM.write(5,bad);
     }}
 else if(state3==HIGH)
 {
  count=0;
  EEPROM.write(1,count);
  good=0;
  EEPROM.write(3,good);
  bad=0;
  EEPROM.write(5,bad);
  sum =0;
  EEPROM.write(7,sum);
  lcd.clear();
  lcd.setCursor(2,1);
  lcd.print("DATA CLEARD");
  delay(300);
  lcd.clear();
 }
     else 
  {
    count=count;
    EEPROM.write(1,count);
    
  }
  lcd.setCursor(0,0);
  count=EEPROM.read(1);
  lcd.print("NEW   OBJECTS:");
  lcd.print(count);
  lcd.setCursor(0,2);
  good=EEPROM.read(3);
  lcd.print("GOOD  OBJECTS:");
  lcd.print(good);
  lcd.setCursor(0,3);
  bad=EEPROM.read(5);
  lcd.print("BAD   OBJECTS:");
  lcd.print(bad);
  lcd.setCursor(0,1);
  bad=EEPROM.read(5);
  
  sum=good+bad;
  EEPROM.write(7,sum);
  lcd.print("TOTAL OBJECTS:");
  sum=EEPROM.read(7);
  lcd.print(sum);

}
