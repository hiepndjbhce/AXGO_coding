void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
}
