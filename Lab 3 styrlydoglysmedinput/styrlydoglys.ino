///la brukeren taste inn et delay med tastaturet, så hvis det er 500, så skal lyset være på 500ms, og av 500ms eller strye buzzeren

const int ledPin = 2;
const int ledBuzz = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledBuzz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 
Serial.println("skriv inn L / B og et nummer. Skriv inn ");
  while (!Serial.available()){}   // betyr det samme som Serial.available == 0
    char LED = Serial.read();
 if (LED == 'L') {
  while (!Serial.available()){}
  int Input = Serial.parseInt();
  digitalWrite(ledPin, HIGH);
  delay(Input);
  digitalWrite(ledPin, LOW);
  delay(Input);
    }
  if (LED == 'B'){
    Serial.println("Skriv B 0 for å slå av lyd");
    while (!Serial.available()){}
    int Tone = Serial.parseInt();
    tone(ledBuzz, Tone);
    if (Tone == 0){
      noTone(ledBuzz);
    }
  }
    
}
