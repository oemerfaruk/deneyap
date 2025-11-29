#include <Deneyap_Servo.h>

#define servopin1 D12 // PWM pin
#define servopin2 D13 // PWM pin

Servo myservo1, myservo2;

void setup(){
    myservo1.attach(servopin1);
    myservo2.attach(servopin2);
}
void loop(){
    myservo1.write(90);
    myservo2.write(90);
}
