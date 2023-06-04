#include <Deneyap_Servo.h> // github.com/oemerfaruk/deneyap
#define SERVOPIN D0  		  //servo motor bağlantısı
#define L1_pin A1   			//sağ ışık sensörü bağlantısı
#define L2_pin A2   			//sol ışık sensörü bağlantısı
Servo zubeyir;
int sensor1, sensor2;
int pos = 0;
void setup() {
  Serial.begin(9600);
  zubeyir.attach(SERVOPIN);
  pinMode(L1_pin, INPUT);    
  pinMode(L2_pin, INPUT);   
}
void loop() {  
  sensor1 = map(analogRead(L1_pin),0,4096,0,90);
  sensor2 = map(analogRead(L2_pin),0,4096,0,90);

  pos = (sensor2 - sensor1) + 90;
  zubeyir.write(pos);
  Serial.println(pos);
  
  delay(5);
}

