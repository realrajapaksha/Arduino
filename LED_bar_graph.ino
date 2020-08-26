int LedPin[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(LedPin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(LedPin[i], HIGH);
    delay(1000);
    digitalWrite(LedPin[i], LOW);
  }
}
