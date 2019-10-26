/*
Make a LED blink 5 times only
*/

const int ledPin = 7;

void setup() {
 pinMode (ledPin, OUTPUT);

}

//While løkke med blink kun 5 ganger
void loop() {
  int times = 0;
  while(times < 5) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
    times++;
  }exit(0);
}
