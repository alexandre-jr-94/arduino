int estadoBotao = 0;
  
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, INPUT);
}

void loop() {
estadoBotao = digitalRead(12);
  
  if (estadoBotao == HIGH) {
  digitalWrite(LED_BUILTIN, HIGH);
  } else {
  digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10);
}
