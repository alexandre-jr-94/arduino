void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for(int s=0; s<3; s++){
    delay(250);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
  }
  for(int o=0; o<3; o++){
    delay(1000);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
  }
    for(int s=0; s<3; s++){
    delay(250);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(250);
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(2000);
}
