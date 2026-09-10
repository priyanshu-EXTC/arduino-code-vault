const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  int brightness = (potValue * 255) / 1023;
  analogWrite(ledPin, brightness);
  delay(10);
}
