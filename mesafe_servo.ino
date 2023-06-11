#include<Deneyap_Servo.h>
#define SERVOPIN1 D0
#define trig_pin D14
#define echo_pin D15
#define buzzer_pin D1
Servo myservo;
int pos=0;
long sure;
long uzaklik;

void setup() {
  myservo.attach(SERVOPIN1);
  Serial.begin(115200);
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(buzzer_pin,OUTPUT);
}

void loop() {
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(5);
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin,LOW);
  sure=pulseIn(echo_pin,HIGH);
  uzaklik=sure/29.1/2;
  if(uzaklik<10)  {
    digitalWrite(buzzer_pin,HIGH);
  }
  if(uzaklik>=10){
    digitalWrite(buzzer_pin,LOW);
  }
  Serial.print("uzaklık");
  Serial.print(uzaklik);
  Serial.print("CM");
  pos=uzaklik*(180/40);
  myservo.write(pos);
  delay(5);

}
