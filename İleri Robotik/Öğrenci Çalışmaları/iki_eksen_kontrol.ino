#include <Servo.h>

#define SERVO1 12     // Servo 1 sinyal pini (D12)
#define SERVO2 13     // Servo 2 sinyal pini (D13)
#define SW_pin 4      // Joystick buton pini
#define X_pin A0      // Joystick X ekseni
#define Y_pin A1      // Joystick Y ekseni

Servo myServo1, myServo2;

int pos1 = 90;  // başlangıç açısı
int pos2 = 90;
int X_val, Y_val, SW_val;
int stepVal = 1;

void setup() {
    Serial.begin(115200);

    myServo1.attach(SERVO1);
    myServo2.attach(SERVO2);

    pinMode(SW_pin, INPUT_PULLUP);
}

void loop() {
    X_val = analogRead(X_pin);
    Y_val = analogRead(Y_pin);
    SW_val = digitalRead(SW_pin);

    // X ekseni → Servo 1
    if (X_val < 1000 && pos1 > 0) pos1 -= stepVal;
    if (X_val > 3000 && pos1 < 180) pos1 += stepVal;

    // Y ekseni → Servo 2
    if (Y_val < 1000 && pos2 > 0) pos2 -= stepVal;
    if (Y_val > 3000 && pos2 < 180) pos2 += stepVal;

    myServo1.write(pos1);
    myServo2.write(pos2);

    Serial.print("Servo1: ");
    Serial.print(pos1);
    Serial.print(" | Servo2: ");
    Serial.println(pos2);

    delay(10);
}