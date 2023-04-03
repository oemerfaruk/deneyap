#include <WiFi.h>
#include <WiFiClient.h>
#include "ThingSpeak.h"
#include <DHT.h>

DHT dht_D0(D0,DHT11);
float sicaklik, nem;


const char* ssid = "xxx";// xxx yerine ağınızın adını yazınız
const char* password = "12345"; // 1234 yerine ağınızın şifresini yazınız

WiFiClient client; // WifiClint için clint adında class tanımlandı

unsigned long myChannelNumber = 0000000; // 0000000 yerine kanal numaranızı yazınız
const char * myWriteAPIKey = "XYZ"; // yerine API Key (Thingspeak sitesinde mevcut) yazınız

void setup() {
  Serial.begin(115200); // Seri haberleşme başalatıldı
  dht_D0.begin();
 
  while (!Serial) {; // Seri haberleşme başlayana kadar bu döngüde kalır
  }
  WiFi.mode(WIFI_STA); // Wifi Mode ayarlandı
  ThingSpeak.begin(client); // Thingspeak kütüphanesine göre tanımlama yapıldı
}

void loop() {

sicaklik=dht_D0.readTemperature();
Serial.print("sicaklik  :  ");
Serial.println(sicaklik);

nem = dht_D0.readHumidity();
Serial.print("Nem: ");
Serial.println(nem);


  // Wifi bağlantısı
  if(WiFi.status() != WL_CONNECTED){
  Serial.print("Bağlanılmaya çalışılan ağ: ");
  Serial.println(ssid);
  while(WiFi.status() != WL_CONNECTED){
  WiFi.begin(ssid, password);
  Serial.println("Ağ bağlantısı bekleniyor");
  delay(5000);
}
  Serial.println("\nConnected.");
}
  ThingSpeak.writeField(myChannelNumber, 1, sicaklik, myWriteAPIKey); //ThingSpeak.writeField fonksiyonu "ThingSpeak.h"da tanımlıdır
  ThingSpeak.writeField(myChannelNumber, 2, nem, myWriteAPIKey);
  delay(1000); // Verilerin gönderim aralığı burada iki saniye olarak belirlenmiştir
}
