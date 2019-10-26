/*
 * For å sende et array til en funksjon må vi sende med en peker til det første elementet
 * og lengden av arrayet på denne måten 
 * funksjons_navn(mitt_array, lengde);
 * Når vi lager en funksjon som skal ta et array som parameter gjør vi det på denne måten:
 * void funksjons_navn(intarray[], intlength){....................}
 * Gjør om koden, som måler 100 malinger fra et potmeter, fra forelesningen til å bruke 
 * funksjoner som tar arrayet og lengden som parameter
 */

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

/*
const int potPin = A2;
const int buttonPin = 2;

struct data{
  bool buttonValue;
  int potValue;
  unsigned long timeStamp;
};

const int ant = 100;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(1000);
  data mes[ant];
Serial.println("Starting");

  for(int i = 0; i < ant; i++){
    //data er variabel, mes er navnet, og [i] er plassen i arrayet, .blalba sier hva den skal lese og lagre hvor
    mes[i].buttonValue = digitalRead(buttonPin);
    mes[i].potValue = analogRead(potPin);
    mes[i].timeStamp = millis();
    delay(50);
  }

  for(int i = 0; i < 0; i++){
    Serial.print("button:");
    Serial.print(mes[i].buttonValue);
    Serial.print("potmeter:");
    Serial.print(mes[i].potValue);
    Serial.print("timestamp:");
    Serial.println(mes[i].timeStamp);
  }
}
*/
