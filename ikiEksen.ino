#include <Servo.h>

#define SERVO1 5
#define SERVO2 6
#define SW_pin 2
#define X_pin A0
#define y_pin A1

Servo myServo1, myServo2;
int pos1 = 0, pos2 = 0, X_val, Y_val, SW_val, dly = 10, stp = 1;
int min1 = 0, max1 = 180, min2 = 0, max2 = 180;

void setup(){
  myServo1.attach(myServo1);
  myServo2.attach(myServo2);
  pinMode(SW_pin, INPUT_PULLUP); 
  digitalWrite(SW_pin, HIGH);
  pinMode(x_pin, INPUT); 
  pinMode(y_pin, INPUT);
}
void loop(){
  X_val = analogRead(x_pin);
  Y_val = analogRead(y_pin);
  SW_val = digitalRead(SW_pin);
  if (SW_val < 1) {
    if (dly == 5) dly = 10;
    else if (dly == 10) dly = 20;
    else if (dly == 20) dly = 5;
    delay(500);
  }
  if (X_val < 250 && pos1 > min1) pos1 -= stp;
  if (X_val > 750 && pos1 < max1) pos1 += stp;
  if (Y_val < 250 && pos2 > min2) pos2 -= stp;
  if (Y_val > 750 && pos2 < max2) pos2 += stp;
  myservo1.write(pos1);
  myservo2.write(pos2);
  delay(dly);
}
