void setup() {
  Serial.begin(9600);
}

void loop() {
  byte input = 0;
Serial.readBytes(input, 8);
PORTC = input;
}
