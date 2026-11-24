const int ROUGE = 8;
const int JAUNE = 9;
const int VERTE = 10;

void toutEteindre() {
  digitalWrite(ROUGE, LOW);
  digitalWrite(JAUNE, LOW);
  digitalWrite(VERTE, LOW);
}

void setup() {
  pinMode(ROUGE, OUTPUT);
  pinMode(JAUNE, OUTPUT);
  pinMode(VERTE, OUTPUT);
  toutEteindre();
}

void loop() {
  toutEteindre();
  digitalWrite(VERTE, HIGH);
  delay(5000);

  toutEteindre();
  digitalWrite(JAUNE, HIGH);
  delay(2000);

  toutEteindre();
  digitalWrite(ROUGE, HIGH);
  delay(5000);
}