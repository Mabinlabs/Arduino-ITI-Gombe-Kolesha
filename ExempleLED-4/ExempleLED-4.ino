const int ROUGE = 8;
const int VERTE = 9;

void setup() {
  pinMode(ROUGE, OUTPUT);
  pinMode(VERTE, OUTPUT);
  digitalWrite(ROUGE, LOW);
  digitalWrite(VERTE, LOW);
}

void loop() {
  digitalWrite(VERTE, LOW);
  digitalWrite(ROUGE, HIGH);
  delay(500);

  digitalWrite(ROUGE, LOW);
  digitalWrite(VERTE, HIGH);
  delay(500);
}