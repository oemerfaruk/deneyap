// Kütüphaneleri ekle
#include <Servo.h>

// Pin tanımlamaları
#define joystick1XPin A0
#define joystick1YPin A1
#define joystick2XPin A2
#define joystick2YPin A3

// Servo motorlarının pinleri
#define servo1Pin 9
#define servo2Pin 10

// Joystick okuma değer aralıkları
#define joystickMin 0
#define joystickMax 1023

// Servo motorlarının açı aralığı
#define servoMinAngle 0
#define servoMaxAngle 180

// Servo nesnelerini oluştur
Servo servo1;
Servo servo2;

void setup() {
  // Servo pinlerini çıkış olarak ayarla
  pinMode(servo1Pin, OUTPUT);
  pinMode(servo2Pin, OUTPUT);
  
  // Servo motorları başlat
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
}

void loop() {
  // Joystick okuma değerlerini al
  int joystick1X = analogRead(joystick1XPin);
  int joystick1Y = analogRead(joystick1YPin);
  int joystick2X = analogRead(joystick2XPin);
  int joystick2Y = analogRead(joystick2YPin);
  
  // Hesaplanmış hareket değerleri
  int moveX = map(joystick1X, joystickMin, joystickMax, -100, 100);
  int moveY = map(joystick1Y, joystickMin, joystickMax, -100, 100);
  int rotateX = map(joystick2X, joystickMin, joystickMax, -100, 100);
  int rotateY = map(joystick2Y, joystickMin, joystickMax, -100, 100);
  
  // Hareket yönlendirmesi hesapla
  int leftMotorSpeed = moveY + rotateX;
  int rightMotorSpeed = moveY - rotateX;
  
  // Hareketi sınırla -100 ila 100 arasında
  leftMotorSpeed = constrain(leftMotorSpeed, -100, 100);
  rightMotorSpeed = constrain(rightMotorSpeed, -100, 100);
  
  // Servo açılarını hesapla
  int leftServoAngle = map(leftMotorSpeed, -100, 100, servoMinAngle, servoMaxAngle);
  int rightServoAngle = map(rightMotorSpeed, -100, 100, servoMinAngle, servoMaxAngle);
  
  // Servo motorlarına açıları uygula
  servo1.write(leftServoAngle);
  servo2.write(rightServoAngle);
  
  // Kısa bir gecikme ekle
  delay(10);
}
