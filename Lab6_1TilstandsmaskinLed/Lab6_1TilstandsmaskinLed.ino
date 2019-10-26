//noe switch and case, tilstand maskin og blinke uten delay
//en tilstandsmaskin er en tenkt måte, tenges ofte i sirkler, systemet er i forskjellige tilstander så bruker man input til å forandre tilstanden
//ofte brukt, traffikklys, roboter som kjører selv

const int ledPin = 7;
const int buttonPin = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 18;
//interupt kan ikke brukes på alle pins, så buttonPin kan ikke være hvor som helst

enum possibleStates {on, fastBlink, blink, off};
const int numberOfStates = sizeof(possibleStates);
possibleStates state = blink;

const int blinkInterval = 1000;
volatile unsigned long lastInterrupt = 0;
const int debounceTime = 100;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), stateChange, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2), stateChange2, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPin3), breakStopp, RISING);
}

void loop() {
 static bool ledState = LOW;
 static unsigned long lastLedStateChange = 0;
 //static sier gjør det en gang
  switch(state){
    case on: 
      ledState = HIGH;
      break;
    case fastBlink:
      if (millis() >= lastLedStateChange + (blinkInterval/10)){
        ledState = !ledState;
        lastLedStateChange = millis();
      }
      break;
    case blink:
      if (millis() >= lastLedStateChange + blinkInterval){
        ledState = !ledState;
        lastLedStateChange = millis();
      }
      break;
    case off:
      ledState = LOW;
  }
  digitalWrite(ledPin, ledState);
  Serial.println(ledState);
}


void stateChange(){
  if(millis() >= lastInterrupt + debounceTime){
  state = (state + 1) % numberOfStates;
  //% er rest ting. Så (1+1)%3 får rest 2, (2+1)%3 får rest og drar tilbake til 0
  lastInterrupt = millis();
  /////if (state == 3) state = 0;
  }
}

void stateChange2(){
  if(millis() >= lastInterrupt + debounceTime){
    state = (state - 1);
    if (state == 0) state = 3;
  }
}

void breakStopp(){
  while(true);
}
