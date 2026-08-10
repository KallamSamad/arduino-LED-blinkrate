void setup() {
  // Set LED pin to output
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    digitalWrite(12,HIGH);
    Serial.println("LED ON!");
    delay(2000);
    digitalWrite(12,LOW);
    Serial.println("LED OFF!");
    delay(1000);
}