#include <lsm6dsm.h>
#include <Deneyap_Servo.h>

LSM6DSM IMU; //Deneyap kart üzerinde bulunan IMU sensörü modeli

void setup() {
    //Seri iletişim ve IMU sensorunun başlatılması
    Serial.begin(115200);
    IMU.begin();
}
void loop() {
    //açı hesaplama denklemi (sqrt: karekök alma işlemi, pow: üs alma işlemi, PI: pi (π) sayısı)
    angle_x = atan(IMU.readFloatAccelX() / sqrt(pow(IMU.readFloatAccelY(), 2) + pow(IMU.readFloatAccelZ(), 2)+0.001)) * 180 / PI;
    angle_Y = atan(IMU.readFloatAccelY() / sqrt(pow(IMU.readFloatAccelZ(), 2) + pow(IMU.readFloatAccelX(), 2)+0.001)) * 180 / PI;
    angle_Z = atan(IMU.readFloatAccelZ() / sqrt(pow(IMU.readFloatAccelX(), 2) + pow(IMU.readFloatAccelY(), 2)+0.001)) * 180 / PI;

    // Seri Ekran Çıktıları
    Serial.print("X Ekseni: ");
    Serial.println(angle_x);

    Serial.print("Y Ekseni: ");
    Serial.println(angle_y);

    Serial.print("Z Ekseni: ");
    Serial.println(angle_z);

    delay(10);                                           
} 
