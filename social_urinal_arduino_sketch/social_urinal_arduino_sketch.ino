
byte weight; 
byte state; 

void setup() {
  Serial.begin(57600);
  weight = 0;
  state = 0;
}

void loop() {
  state = Serial.read();
  weight++;
  Serial.write(weight); 
  delay(100);
}
