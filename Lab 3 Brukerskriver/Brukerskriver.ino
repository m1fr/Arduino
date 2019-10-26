///la brukeren taste inn et delay med tastaturet, så hvis det er 500, så skal lyset være på 500ms, og av 500ms

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
