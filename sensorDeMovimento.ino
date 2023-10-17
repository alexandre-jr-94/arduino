 
 int distancia = 0;


 long readUltrasonicDistance(int triggerPin, int echoPin)
 {

 pinMode(triggerPin, OUTPUT);
 digitalWrite(triggerPin, LOW);
 delayMicroseconds(2);
 digitalWrite(triggerPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(triggerPin, LOW);

 pinMode(echoPin, INPUT);
 return pulseIn(echoPin, HIGH);
 }

 void setup()
 {
 pinMode(12, OUTPUT);
 pinMode(13, OUTPUT);
 }

 void loop()
 {

 distancia = 0.01723 * readUltrasonicDistance(4, 5);
 if (distancia < 100) {
 digitalWrite(12, HIGH);
 digitalWrite(13, LOW);
 } else {
 digitalWrite(12, LOW);
 digitalWrite(13, HIGH);
}

 delay(10);
}
