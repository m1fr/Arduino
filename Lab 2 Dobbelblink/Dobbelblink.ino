/*
  Make 2 LED's blink
*/

void setup() {
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(7, LOW);
  
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(9, HIGH);
  
}
