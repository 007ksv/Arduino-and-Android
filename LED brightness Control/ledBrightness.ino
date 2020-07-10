/*
  Contorl Arduino LED brightness using android app
*/

void setup() {

  Serial.begin(9600);
  pinMode(8, OUTPUT);

}

void loop() {
  if (Serial.available() > 0)
  {
    Incoming_value = Serial.read();
    Serial.print(Incoming_value);
    Serial.print("\n");
    analogWrite(8, Incoming_value);
    digitalWrite(8, LOW);
  }
}
