#include <Servo.h>
#include <lsm6dsm.h>

#define SERVOPIN1 11
#define SERVOPIN2 12
#define SERVOPIN3 13

Servo servo1, servo2, servo3;

LSM6DSM IMU;

void setup(){
    servo1.attach(SERVOPIN1);
    servo2.attach(SERVOPIN2);
    servo3.attach(SERVOPIN3);

    IMU.begin();
}

void loop(){
    // Servolari 90 dereceye ayarliyoruz
    /*
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    */
    
    // IMU Sensorunden veri okuyoruz ve map fonskiyonu ile aralik veriyoruz
    int posX = map(IMU.readFloatAccelX(), -1, 1, 0, 180);
    int posY = map(IMU.readFloatAccelY(), -1, 1, 0, 180);
    int posZ = map(IMU.readFloatAccelZ(), -1, 1, 0, 180);

    // degerleri servolara yaziyoruz
    servo1.write(posX);
    servo2.write(posY);
    servo3.write(posZ);
}