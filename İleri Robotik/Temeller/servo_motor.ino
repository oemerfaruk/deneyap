#include <Deneyap_Servo.h>

#define servopin1 D12 // PWM pin
#define servopin2 D13 // PWM pin

Servo myservo1, myservo2;


void setup(){
    Serial.begin(115200);

    myservo1.attach(servopin1);
    myservo2.attach(servopin2);

}2
void loop(){
    // Bu uygulamada eğitmenler önce bir servo sonra ikinci servoyu takarak kademeli olarak ilerleyebilir

    
    for(int i = 0; i < 180; i++){
        // Serial Ekran Servo Açısı Göster
        Serial.print("Servo 1 Açı: ");
        Serial.println(i);

        // Servolara değer gönder
        myservo1.write(i);
    }

    for(int i = 180; i > 0; i--){
        // Serial Ekran Servo Açısı Göster
        Serial.print("Servo 2 Açı: ");
        Serial.println(i);

        // Servolara değer gönder
        myservo2.write(i);
    }

    delay(20);
}