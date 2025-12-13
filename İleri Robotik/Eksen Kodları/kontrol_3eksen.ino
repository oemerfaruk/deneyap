// üç eksen robotik kol kontrolü
// iki potansiyometre + ldr

#include <Deneyap_Servo.h>

#define servopin1 D12
#define servopin2 D13
#define servopin3 D14

#define potX A0
#define potY A1

#define ldr A2

Servo myservo1, myservo2, myservo3;

int degX = 90;
int degY = 90;
int degZ = 90;

void setup(){
    myservo1.attach(servopin1);
    myservo2.attach(servopin2);
    myservo3.attach(servopin3);

    pinMode(potX, INPUT);
    pinMode(potY, INPUT);
    pinMode(ldr, INPUT);

    myservo1.write(degX);
    myservo2.write(degY);
    myservo3.write(degZ);
}
void loop(){
    degX = map(analogRead(potX), 0, 4096, 0, 180);
    degY = map(analogRead(potY), 0, 4096, 0, 180);
    degZ = map(analogRead(ldr), 0, 4096, 0, 180);

    myservo1.write(degX);
    myservo2.write(degY);
    myservo3.write(degZ);
}