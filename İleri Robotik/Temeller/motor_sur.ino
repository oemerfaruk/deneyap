#define MOT_ENA 12      // ENA Pin - PWM Olmalı analogWrite kullanılacak
#define MOT_DIR1 13     // Yön pini
#define MOT_DIR2 14     // Yön pini

int hiz = 255; // hız değerini çeşitli örneklerde for dongüsünde de verebilirsiniz

void setup(){
    Serial.begin(115200);
    pinMode(MOT_ENA, OUTPUT);
    pinMode(MOT_DIR1, OUTPUT);
    pinMode(MOT_DIR2, OUTPUT);
}

void loop(){
    // İleri yönde döndür
    digitalWrite(MOT_DIR1, HIGH);
    digitalWrite(MOT_DIR2, LOW);

    // Hızı PWM ile ayarla
    analogWrite(MOT_ENA, hiz);

    delay(500);

    // Geri yönde döndür
    digitalWrite(MOT_DIR1, LOW);
    digitalWrite(MOT_DIR2, HIGH);

    // Hızı PWM ile ayarla
    analogWrite(MOT_ENA, hiz);

    delay(500);
}