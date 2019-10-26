/*
Let the user write in the delay for the LED to blink
If its 500, the LED should stay on for 500ms and off 500ms
*/

const int ledPin = 2;
int Input = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
if (Serial.available()){
  Input = Serial.parseInt();
  }
  digitalWrite(ledPin, HIGH);
  delay(Input);
  digitalWrite(ledPin, LOW);
  delay(Input);
}
