#include <Deneyap_Servo.h>

#define servopin1 D12 // PWM pin
#define servopin2 D13 // PWM pin
#define xpin A0
#define ypin A1

Servo myservo1, myservo2;


void setup(){
    Serial.begin(115200);

    myservo1.attach(servopin1);
    myservo2.attach(servopin2);

    pinMode(xpin, INPUT);
    pinMode(ypin, INPUT);
}
void loop(){
    int xval = map(analogRead(xpin), 0, 1042, 0, 2048);
    int yval = map(analogRead(ypin), 0, 1042, 0, 2048);

    // Titreşim önleme
    if(abs(xval - 90) < 5) xval = 90;
    if(abs(yval - 90) < 5) yval = 90;

    // Seri monitör çıktısı
    Serial.print("X Eksen: ");
    Serial.println(xval);
    Serial.print("Y Eksen: ");
    Serial.println(yval);

    // Servolara değer gönder
    myservo1.write(xval);
    myservo2.write(yval);

    delay(20);
}