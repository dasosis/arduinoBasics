#define BUTTON_PIN 4
void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
}
void loop() {
  Serial.println(digitalRead(BUTTON_PIN));
  delay(1);
}
