#define LED_1_PIN 11
#define LED_2_PIN 10
#define LED_3_PIN 9
#define BUTTON_PIN 2

int LEDBlinkState = 1;

int arr[3]={LED_1_PIN,LED_2_PIN,LED_3_PIN};

void mode(){
  for(int x{0};x<3;x++){
      pinMode(arr[x], OUTPUT);
  }
}

void write(){
    for(int y{0};y<3;y++){
  digitalWrite(arr[y], LOW);
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(BUTTON_PIN, INPUT);
  mode();
  write();
}

void LEDblink(){
   if (LEDBlinkState == 1) {

      Serial.println("Changing to State 2");

      digitalWrite(LED_1_PIN, HIGH);
      digitalWrite(LED_2_PIN, LOW);
      digitalWrite(LED_3_PIN, HIGH);

      LEDBlinkState = 2;
    }
    else {

      Serial.println("Changing to State 1");

      digitalWrite(LED_1_PIN, LOW);
      digitalWrite(LED_2_PIN, HIGH);
      digitalWrite(LED_3_PIN, LOW);

      LEDBlinkState = 1;
    }

    delay(300);
}
void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    LEDblink();
}
}