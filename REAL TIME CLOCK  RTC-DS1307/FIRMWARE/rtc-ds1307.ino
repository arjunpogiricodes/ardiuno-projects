#include <LiquidCrystal.h>
#include  <Wire.h>
#include "RTCDS1307.h"
const int rs=5,  en =4, d4=3, d5=2,d6=1, d7=0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

RTCDS1307 rtc(0x68);
uint8_t year, month, weekday, day, hour, minute, second;
bool period = 0;

String m[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Agu", "Sep", "Oct", "Nov", "Dec"};
String w[7] = {"sun","mon" , "tue","wed", "thu", "fri", "sat" };
void setup() {
  
  lcd.begin(16,2);
  
  }

void loop() {
   rtc.getDate(year, month, day, weekday);
  rtc.getTime(hour, minute, second, period);
  if (!(second % 3)) rtc.setMode(1 - rtc.getMode());
  rtc.getTime(hour, minute, second, period);
  lcd.setCursor(0,1);

  lcd.print(day, DEC);
  lcd.print("/");
  lcd.print(m[month - 1]);
  lcd.print("/");
  lcd.print(year + 2000, DEC);
  lcd.print("  ");
  lcd.print(w[weekday-1]);
  
  lcd.setCursor(0,0);
  lcd.print(hour, DEC);
  lcd.print(":");
  lcd.print(minute, DEC);
  lcd.print(":");
  lcd.print(second, DEC);
  lcd.print(rtc.getMode() ? (period ? " PM" : " AM") : "");
  lcd.println();
  delay(1000);

}
