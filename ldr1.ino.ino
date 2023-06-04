#include <Deneyap_Servo.h>
#define SERVOPIN D0  		  //servo motor bağlantısı
#define L1_pin D14   			//sağ ışık sensörü bağlantısı
#define L2_pin D15   			//sol ışık sensörü bağlantısı
Servo deneyap;
int sensor1, sensor2;
int pos = 0;
void setup() {
  Serial.begin(9600);
  deneyap.attach(SERVOPIN);
  pinMode(L1_pin, INPUT);    
  pinMode(L2_pin, INPUT);   
}
void loop() {  
  sensor1 = digitalRead(L1_pin);
  sensor2 = digitalRead(L2_pin);
  if(sensor1 > sensor2){
    pos = 0;
    deneyap.write(pos);
  }
  else if(sensor2 > sensor1){
    pos = 180;
    deneyap.write(pos);
  }
  else if(sensor2 == sensor1){
    pos = 90;
    deneyap.write(pos);
  }
delay(5);
}

