








int ldrPin = 2;
String light = "OFF";

void setup() {
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrStatus = digitalRead(ldrPin);

  if (ldrStatus == 1) {
    light = "ON";
    Serial.print(light);
  }
  else if (ldrStatus == 0) {
    light = "OFF";
    Serial.print(light);
  }
  delay(1000);
}



int ldrPin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int Value = analogRead(ldrPin); 
  Serial.println(Value);
  delay(1000);
}
