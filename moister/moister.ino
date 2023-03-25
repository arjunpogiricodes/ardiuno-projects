int pin=A2;
int motor=3;


void setup() {
  // put your setup code here, to run once:
pinMode(pin,INPUT);
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  int state=analogRead(pin);
  float per=(100-((state/1023.00)*100));
  Serial.println(state);
  Serial.println(per);
  /*if (per>60)
  {
    digitalWrite(motor,1);
  }
  else
  {
    digitalWrite(motor,0);
  }
  // put your main code here, to run repeatedly:


//Serial.println(percentage);*/

}
