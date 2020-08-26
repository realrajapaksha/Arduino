int analogPin = A0;

void setup() {
}

void loop() {
  float soilValue = analogRead(analogPin);
  Serial.print("Soil Moisture = ");
  Serial.print(soilValue);
  Serial.println("%");
}
