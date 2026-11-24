const int LED = 8;
const int TEMPS_ALLUME = 200;
const int TEMPS_ETEINT = 1800;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(TEMPS_ALLUME);
  digitalWrite(LED, LOW);
  delay(TEMPS_ETEINT);
}