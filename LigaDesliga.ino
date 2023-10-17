int estadoBotao = 0;

int guardaEstado = 0;


void setup() {
  pinMode(12, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}


void loop(){
  estadoBotao = digitalRead(12);
  if (estadoBotao == HIGH) {
    if(guardaEstado == HIGH){
      guardaEstado = LOW;
    } else {
      guardaEstado = HIGH;
    }
  }

  if (guardaEstado == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(250);
}
