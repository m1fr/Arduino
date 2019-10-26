/*
Use interrupt on a button so the light will blink faster and faster for each push,
and an interrupt on another button so the LED will blink slower and slower
*/

const int ledPin = 7;
const int buttonPinfast = 2;  //ikke alle pins interrupt virker på 2, 3, 18, 19, 20, 21
const int buttonPinslow = 3;
volatile bool ledState = HIGH;
volatile long i = 1500;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPinfast, INPUT);
  pinMode(buttonPinslow, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPinfast), blinkFast, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPinslow), blinkSlow, RISING);
}

void loop() {
    digitalWrite(ledPin, LOW);
    delay(i);
    digitalWrite(ledPin, HIGH);
    delay(i);
}


void blinkFast() {
    i-=round(i*0.1);
}

void blinkSlow() {
    i+=round(i*0.1);
}
