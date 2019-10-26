/*
 * Vi skal lage en enkel kodelås. Den riktige koden er knapp1 først og deretter knapp2. Om denne koden trykkes inn skal led’enlyse. 
 * Trykker man  inn knappene i feil rekkefølge skal buzzerenpipe.
 */
const int ledPin = 7;
const int button1Pin = 8;
const int button2Pin = 10;
const int buzzPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
 // pinMode (buzzPin, OUTPUT);
  pinMode (button1Pin, INPUT);
  pinMode (button2Pin, INPUT);
}

void loop() {
  int buttonState1 = digitalRead (button1Pin);
  int buttonState2 = digitalRead (button2Pin);
 if (digitalRead(button1Pin = HIGH)&& digitalRead(button2Pin = LOW); digitalRead(button2Pin = HIGH) && digitalRead(button1Pin = LOW);)) {
  digitalWrite(ledPin, HIGH)
  exit(0);
 }else{
 tone(buzzPin, 1000);
 delay(1000);
 notone(buzzPin);
 }

}

/*
void Code(){
digitalRead(button1Pin = HIGH); 
digitalRead(button1Pin = LOW); 
digitalRead(button2Pin = HIGH); 
digitalRead(button2Pin = LOW);
}
*/
