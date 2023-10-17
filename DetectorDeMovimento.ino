int estadoSensor = 0;

void setup(){
  pinMode(12, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  estadoSensor = digitalRead(12);
  if (estadoSensor == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10);
}
