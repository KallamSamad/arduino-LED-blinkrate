void setup() {
  // Set LED pin to output
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    digitalWrite(13,HIGH);
    Serial.println("LED ON!");
    delay(2000);
    digitalWrite(13,LOW);
    Serial.println("LED OFF!");
    delay(1000);
}