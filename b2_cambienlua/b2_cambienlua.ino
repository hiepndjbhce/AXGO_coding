
  int pinSensor = 5;
  int pinBuzzer = 8;
  
  void setup() {
  // put your setup code here, to run once:
  pinMode(pinSensor, INPUT);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinSensor) == LOW) {
    digitalWrite(pinBuzzer, LOW);
  } else {
    digitalWrite(pinBuzzer, HIGH);
  }
  delay(50);
}
