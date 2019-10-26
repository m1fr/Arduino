#include <IRremote.h>

int RECV_PIN = 11;
int ledBLUE = 7;
int ledGREEN = 6;
int ledRED = 5;

IRrecv irrecv(RECV_PIN);

decode_results results;

long nrRemote[6]= {
  0xFF30CF,    //1 - g på
  0xFF10EF,    //4 - g av
  0xFF18E7,    //2 - r på
  0xFF38C7,    //5 - r av
  0xFF7A85,    //3 - b på
  0xFF5AA5     //6 - b av
};
  //0xFF42BD  7
  //0xFF4AB5  8
  //0xFF52AD  9
int valG = 0;
int valR = 0;
int valB = 0;

void setup() {
  irrecv.enableIRIn();//start the reciever
  pinMode(ledBLUE, OUTPUT);
  pinMode(ledGREEN, OUTPUT);
  pinMode(ledRED, OUTPUT);

}

void loop() {
  if (irrecv.decode(&results)) {
    if(results.value == nrRemote[0] && valG == 0) {
      valG = !valG;
      digitalWrite(ledGREEN, valG);
    }
    if(results.value == nrRemote[1] && valG == 1) {
      valG = !valG;
      digitalWrite(ledGREEN, valG);
    }
    if(results.value == nrRemote[2] && valR == 0) {
      valR = !valR;
      digitalWrite(ledRED, valR);
    }
    if(results.value == nrRemote[3] && valR == 1) {
      valR = !valR;
      digitalWrite(ledRED, valR);
    }
    if(results.value == nrRemote[4] && valB == 0) {
      valB = !valB;
      digitalWrite(ledBLUE, valB);
    }
    if(results.value == nrRemote[5] && valB == 1) {
      valB = !valB;
      digitalWrite(ledBLUE, valB);
    }
    irrecv.resume(); //recieve next value
  }
  delay(100);
}
