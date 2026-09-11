const int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 1000);
  delay(500);
  noTone(buzzerPin);
  delay(500);

  tone(buzzerPin, 1500);
  delay(500);
  noTone(buzzerPin);
  delay(500);
}
