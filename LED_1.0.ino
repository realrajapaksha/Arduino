int led = 13;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(800);
  digitalWrite(led, LOW);
  delay(800);
}
