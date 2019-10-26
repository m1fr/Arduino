const int ledPin = 7;
const int buttonPin = 5;
volatile bool ledState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), TurnOff, RISING);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  
}

void TurnOff() {
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
}
