
byte b1 = B11111111;
byte b2 = B00000000;

void setup() {
  DDRC = B11111111;
}

void loop() {
PORTC = b1;
delay(1000);
PORTC = b2;
delay(1000);
}
