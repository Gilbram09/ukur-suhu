#include "DHT.h"
#define DHTPIN 9
#define DHTTYPE DHT11

DHT dht (DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  int temp = dht.readTemperature();
  int humi = dht.readHumidity();
  Serial.print("suhu:   ");
  Serial.print(temp);
  Serial.print("|");
  Serial.print("Humidity");
  Serial.println("humi");
  delay(1000);
}
