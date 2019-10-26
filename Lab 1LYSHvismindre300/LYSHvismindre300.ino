/*
If the Turner state is less than 300, the LED should light up. If it's above 1000, the buzzer shall ring.
*/

// constants won't change. They're used here to set pin numbers:
const int Turner = A1;     // the number of the turner pin
const int ledPin =  11;      // the number of the LED pin
const int Buzz = 6;

// variables will change:
int TurnerState = 0;         // variable for reading the pushbutton status

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  TurnerState = analogRead(Turner);    // read the value from the sensor
  if (TurnerState <= 300) {
  digitalWrite(ledPin, HIGH);  // turn the ledPin on
  } 
  if (TurnerState >= 1000) {
    tone(Buzz, 1000);
  }
  else {
  digitalWrite(ledPin, LOW);   // turn the ledPin off
  noTone(Buzz);
  }
}
