#include <DHT.h>
#define DHTTYPE DHT11
#define dht_apin A0
DHT dht(dht_dpin, DHTTYPE);

void setup() {
  Serial.begin(9600);
  delay(500);
  dht.begin();
  delay(1000);
}

void loop() {
  Serial.print("Current humidity = ");
  Serial.print(dht.readHumidity());
  Serial.print("%  ");
  Serial.print("temperature = ");
  Serial.print(dht.readTemperature());
  Serial.println("C  ");
  delay(1000);
}
