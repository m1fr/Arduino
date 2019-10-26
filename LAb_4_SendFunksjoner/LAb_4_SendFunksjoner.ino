/*
I denne oppgaven skal vi ta målinger fra en potpin, og sende det til et array. 
vi skal så finne snittet av målingene
*/

const int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  const int antM = 100;
  int maalinger[antM];
  
  maal(maalinger, antM);
  long sum = finnSum(maalinger, antM);
  int snitt = finnSnitt(maalinger, antM);
  skrivResultat(sum, snitt, maalinger, antM);
  while (true);
}

void maal(int maalinger[], int antM) {
  Serial.println("Starter maalinger");
  for (int i = 0; i < antM; i++) {
    maalinger[i] = analogRead(potPin);
    delay(50);
  }
  Serial.println("Ferdig med maalinger");
  return;
}

long finnSum(int maalinger[], int antM) {
  long sum = 0;
  for (int i = 0; i < antM; i++) {
    sum += maalinger[i];
  }
  return sum;
}

int finnSnitt(int maalinger[], int antM) {
  return finnSum(maalinger, antM) / antM;
}

void skrivResultat(long sum, int snitt, int maalinger[], int antM) {
  for (int i = 0; i < antM; i++) {
    Serial.print("mallinger[");
    Serial.print(i);
    Serial.print("] = ");
    Serial.println(maalinger[i]);
  }
  Serial.print("Sum: ");
  Serial.println(sum);
  Serial.print("Snitt: ");
  Serial.println(snitt);
}
