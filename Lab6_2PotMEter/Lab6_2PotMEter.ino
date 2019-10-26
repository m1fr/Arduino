/*
 * Not done
 * Grønn, 0-300
 * blå 300 - 850
 * rod >850
 * blir blå, skru ned til 750
 * blå fra 750 ned til 250
 * grønn fra 250 til 0 og opp til 300 igjen
 */
const int gLedPin = 6;
const int bLedPin = 7;
const int rLedPin = 5;
const int turner = A1;

bool ledStateG = LOW;
bool ledStateB = LOW;
bool ledStateR = LOW;
  
int turnerState = 0;

enum possibleStates {gronn, blaa, rod};
const int numOfStates = sizeof(possibleStates);
possibleStates state = gronn;

void setup() {
  pinMode(gLedPin, OUTPUT);
  pinMode(bLedPin, OUTPUT);
  pinMode(rLedPin, OUTPUT);

}

void loop() {
  turnerState = analogRead(turner);

  switch(state) {
    case gronn:
      ledStateG = HIGH;
      break;
    case blaa:
      ledStateB = HIGH;
      break;
    case rod:
      ledStateR = HIGH;
      break;
  }

digitalWrite(gLedPin, ledStateG);
digitalWrite(bLedPin, ledStateB);
digitalWrite(rLedPin, ledStateR);
  
}
