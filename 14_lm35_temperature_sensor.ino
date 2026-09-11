const int lm35Pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawValue = analogRead(lm35Pin);
  float voltage = (rawValue * 5.0) / 1023.0;
  float tempC = voltage * 100.0;

  Serial.println(tempC);
  delay(1000);
}
