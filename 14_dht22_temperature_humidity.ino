#include <DHT.h>

const int dhtPin = 2;
DHT dht(dhtPin, DHT22);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" % | Temp: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(2000);
}
