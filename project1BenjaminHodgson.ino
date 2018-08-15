void setup() {
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  digitalWrite(LED_BUILTIN, LOW);
  if (val <= 400)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    return 0;
  }
  else if (val >= 400)
  {
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
    return 0;
  }
}
