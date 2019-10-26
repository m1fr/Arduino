/* 
a while loop to make a led blink super fast to super slow
When the button is pressed, the light resets to fast blinking
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
