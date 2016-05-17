void setup() {
   pinMode(13, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  Serial.println("{\"id\":\"0000000001\",\"pr\":115,\"tp\":24.5,\"ba\":3.10}");
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(9000);
  Serial.println("{\"id\":\"0000000001\",\"pr\":127,\"tp\":22.0,\"ba\":2.95}");
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(9000);
}
