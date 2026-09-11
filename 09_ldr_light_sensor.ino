const int ldrPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  int brightness = 255 - ((ldrValue * 255) / 1023);
  
  if (brightness < 0) brightness = 0;
  if (brightness > 255) brightness = 255;

  analogWrite(ledPin, brightness);
  delay(100);
}
