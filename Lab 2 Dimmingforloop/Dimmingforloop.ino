//Dimme et lys med en for loop, og dimme ned igjen
//
const int ledPin = 7;

void setup() {
  pinMode (ledPin, OUTPUT);

}

void loop() {
 
//for i in range(255):
for(int i = 0; i <= 255; i++){
  analogWrite(ledPin, i);
  delay(5); 
  }
for(int i =255; i >=0; i--) {
  analogWrite (ledPin, i) ;
  delay(10);
}
}
