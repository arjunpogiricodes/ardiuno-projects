#include <LiquidCrystal.h>
const int rs = 9,  en = 8, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int drainswitch = 3, emptytankswitch = 2, relaypin = 1, motorpin = A3, buzzerpin = A2;
int up = 10, down = 11, select = 12,start_stop=13;
int menu = 0, next = 0, next1 = 0, moto = 0, done = 0 ,start=0;
void excuteaction()
{
  switch (menu) {
    case 1:
      action1();
      break;
    case 2:
      action2();
      break;
    case 3:
      action3();
      break;

  }
  }
void setup() {
  pinMode(up, INPUT);
 pinMode(down, INPUT);
  pinMode(select, INPUT);

  pinMode(drainswitch, INPUT);
   pinMode(start_stop, INPUT);
  pinMode(emptytankswitch, INPUT);
  pinMode(relaypin, OUTPUT);
  pinMode(motorpin, OUTPUT);
  pinMode(buzzerpin, OUTPUT);
  lcd.begin(20, 4);

  lcd.clear();
  lcd.setCursor(0, 0);
    lcd.print("welcome ");
      lcd.setCursor(0, 2);
    lcd.print("check drain swtich ");
    lcd.setCursor(0, 3);
    lcd.print("check empty tank");
}

void loop() {
  
  int state_emptytank = digitalRead(emptytankswitch);
  int state_drain = digitalRead(drainswitch);
  int state_up = digitalRead(up);
  int state_down = digitalRead(down);
  int state_sel = digitalRead(select);
  int state3=digitalRead(start_stop);
  
  if (state_drain == HIGH)
  {
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print(" STATUS:");
    lcd.setCursor(1, 1);
    lcd.print(" CHECKING DRAIN");
    lcd.setCursor(1, 2);
    lcd.print("SWITCH open or close");
    delay(1000);
    lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print(" STATUS:");
    lcd.setCursor(1, 1);
    lcd.print("   TANK DRAIN ");
    lcd.setCursor(1, 2);
    lcd.print("SWITCH OPEND");
   delay(1000);
    next = next + 1;
    //delay(500);
//wait for tank drain
}
else if (state_emptytank == HIGH && next > 0)
  {
   // lcd.clear();
    lcd.setCursor(1, 0);
    lcd.print(" STATUS:");

    lcd.setCursor(0, 1);
    lcd.print(" CHECKING EMPTY");
    lcd.setCursor(0, 2);
    lcd.print("WATER TANK SWITCH");
    delay(1000);
    lcd.setCursor(1, 0);
    lcd.print(" STATUS:");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(" WATER TANK");
    lcd.setCursor(1, 2);
    lcd.print("  IS EMPTY");
    delay(1000);
    //checking tank empty or not
    next1 = next1 + 1;
    delay(500);
    next=0;
  }
   else if (next1>0)
  {
    digitalWrite(relaypin,HIGH);
    lcd.clear();
    lcd.setCursor(1, 1);
    lcd.print("   TANK DRAIN ");
    lcd.setCursor(1, 2);
    lcd.print("SWITCH CLOSED");
    delay(3000);
    lcd.clear();
    lcd.setCursor(1, 1);
    lcd.print(" PUT YOUR CLOTHS ");
    delay(500);
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("RELAY IS ON");
    delay(3000);
    lcd.clear();
    // close the drain valve
    lcd.setCursor(1, 2);
    lcd.print("DRAIN CLOSED");
    lcd.setCursor(0, 2);
    lcd.print("SET THE TIMER ");
    moto = moto + 1;
    delay(300);
    next1=0;
   }
  else
  {
    digitalWrite(relaypin,LOW);
    next = next;
    next1 = next1;
    moto = moto;
  } 
  // ask user to set the time
  

  if (moto >0)
  {
     
    
    if (digitalRead(down) == HIGH)
    {
     
      menu++;
      updatemenu();
      delay(1000);
      while(digitalRead(down)==HIGH);
    }
   else if (digitalRead(up) == HIGH)
    {
      
      menu--;
      updatemenu();
      delay(1000);
      while(digitalRead(up)==HIGH);
    }
  else if (digitalRead(select) == HIGH)
    {
      excuteaction();
      updatemenu();
      delay(1000);
       while(digitalRead(select)==HIGH);
    }
    else
    {
      menu=menu;
    }

}

if(state3==HIGH&& start>0)
{
  runmotor();
  
}


}

void updatemenu()
{
  switch (menu) {
    case 0:
      menu = 1;
      break;
    case 1:
      lcd.clear();
      lcd.setCursor(0, 0);
    lcd.print("SET THE TIMER ");
      lcd.setCursor(1, 1);
      lcd.print("-> 10 min");
      lcd.setCursor(1, 2);
      lcd.print("  15 min");
      lcd.setCursor(1, 3);
      lcd.print("  30 min");
      break;
    case 2:
      lcd.clear();
      lcd.setCursor(0, 0);
    lcd.print("SET THE TIMER ");
      lcd.setCursor(1, 1);
      lcd.print("  10 min");
      lcd.setCursor(1, 2);
      lcd.print("-> 15 min");
      lcd.setCursor(1, 3);
      lcd.print("  30 min");
      break;
    case 3:
      lcd.clear();
      lcd.setCursor(0, 0);
    lcd.print("SET THE TIMER ");
      lcd.setCursor(1, 1);
      lcd.print("  10 min");
      lcd.setCursor(1, 2);
      lcd.print("  15 min");
      lcd.setCursor(1, 3);
      lcd.print("-> 30 min");
      break;
    case 4:
      menu = 3;
      break;
  }
}
void action1()
{
  lcd.clear();
  lcd.setCursor(4, 1);
  lcd.print ("START");
  lcd.setCursor(0, 2);
  lcd.print("10 MINUTES MODE");
  
 start=1;
 // runmotor();
}

void action2() {
   lcd.clear();
  lcd.setCursor(4, 1);
  lcd.print ("start");
  lcd.setCursor(0, 2);
  lcd.print("15 MINUTES MODE");
  
 start=1;
  //runmotor();
}

void action3() {
   lcd.clear();
  lcd.setCursor(4, 1);
  lcd.print ("start");
  lcd.setCursor(0, 2);
  lcd.print("30 MINUTES MODE");
  
  start=1;
  
 
  //runmotor();
}

void runmotor(){
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("STATUS:");
  lcd.setCursor(1,3);
  lcd.print("WASHING.....");
  digitalWrite(motorpin,HIGH);
  delay(5000);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("STATUS:");
  lcd.setCursor(1,3);
  lcd.print("WASHING completed");
  digitalWrite(motorpin,LOW);
  delay(500);
  digitalWrite(buzzerpin,HIGH);
  
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("WASHING DRAIN OPEN");
  delay(5000);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("WASHING DRAINCLOSED");
  start=0;
  next = next;
    next1 = next1;
    moto = moto;
    menu =0;
 delay(5000);
  lcd.clear();
  lcd.setCursor(1,1);
  lcd.print("NEXT ...");
    
  
}
