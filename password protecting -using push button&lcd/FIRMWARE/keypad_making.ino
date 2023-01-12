#include <LiquidCrystal.h>
#include <String.h>
int zero=0;
int one=1;
int two=2;
int three=3;
int four=4;
int five=5;
int six=6;
int seven=7;
int eight =8;
int nine=9;
int enter=10;
int led=13;
int num=5;
const int rs = 12, en = 11, d4 = A4, d5 = A3, d6 = A2, d7 = A1;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
String password = "666";
String input_password;
void push_button()
{
  if(digitalRead(zero)==HIGH)
{
 Serial.write("0");
 delay(100);
}
 if(digitalRead(one)==HIGH)
{
 Serial.write("1");
 delay(100);
 }
 if(digitalRead(two)==HIGH)
{
 Serial.write("2");
 delay(100);
}
if(digitalRead(three)==HIGH)
{
 Serial.write("3");
 delay(100);
}
if(digitalRead(four)==HIGH)
{
 Serial.write("4");
 delay(100);
}
if(digitalRead(five)==HIGH)
{
 Serial.write("5");
 delay(100);
}
if(digitalRead(six)==HIGH)
{
 Serial.write("6");
 delay(100);
}
if(digitalRead(seven)==HIGH)
{
 Serial.write("7");
 delay(100);
}
if(digitalRead(eight)==HIGH)
{
 Serial.write("8");
 delay(100);
}
if(digitalRead(nine)==HIGH)
{
 Serial.write("9");
 delay(100);
}

  
}

void setup() {
  Serial.begin(9600);
 lcd.begin(16, 2);
 pinMode(one,INPUT);
 pinMode(zero,INPUT); 
pinMode(two,INPUT);
pinMode(three,INPUT);
pinMode(four,INPUT);
pinMode(five,INPUT);
pinMode(six,INPUT);
pinMode(seven,INPUT);
pinMode(eight,INPUT);
pinMode(nine,INPUT);
pinMode(enter,INPUT);
pinMode(led,OUTPUT);
input_password.reserve(32);

}
void loop() {
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("EnterUnlock Code");
delay(100);
if(Serial.available())
  {
input_password= Serial.read();


 lcd.setCursor(num, 1);
 lcd.print(input_password);
 num+1;
 delay(1000);
 }
else if(password==input_password)
 {
  lcd.clear();
  delay(100);
  lcd.print("welcome");
  
 }
 else
 {
  lcd.clear();
  delay(100);
  lcd.print("incorrect password");
}









  







}
