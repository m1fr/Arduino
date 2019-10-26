/* for lopp og while loop til å la led blinke 10ms til 2s
 *  så ja
 */

const int ledPin = 7;
const int buttonPin = 10;
int ledState = HIGH;
unsigned long prevMillis = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin, INPUT);
}

//While løkka med knapp
void loop() {
  long i = 10;
  while(i < 2000) {
    digitalWrite(ledPin, LOW);
    delay(i);
    digitalWrite(ledPin, HIGH);
    delay(i);
    i*=1.15;

    if (digitalRead(buttonPin) == HIGH){
      i = 2001;
    }
  }
}

/*
While løkka
void loop() {
  long i = 10;
  while(i < 2000) {
    digitalWrite(ledPin, LOW);
    delay(i);
    digitalWrite(ledPin, HIGH);
    delay(i);
    i*=1.15;
  }
}



 For løkke
 *  

void loop() {
  // for løkke til å blinke fra 10ms til 2 ms
for( long i = 10; i <= 2000; i*=1.2) {
digitalWrite(ledPin, LOW);
delay(i);
digitalWrite(ledPin, HIGH);
delay(i);
}
}
*/
