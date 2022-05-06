#define trigger 8
const int LED = 8;
const int LED2 = 7;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);
pinMode(LED,OUTPUT);
pinMode(LED2,OUTPUT);

pinMode(8, INPUT);

Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(trigger));
  if (digitalRead(trigger) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED, HIGH);

   
  }else{
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(LED, LOW);
    digitalWrite(LED2, LOW);
  }
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);

}
