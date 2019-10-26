/*
   Lag en funksjon skrivStjerner(int antall) som skriver * på skjermen «antall» ganger. Så skal den skrive ut et linjeskift.
   Om man skriver: skrivStjerner(7); Så skal:******* Skrives til skjerm
  Lag funksjonen skrivMangeStjerner(intantall) som først skriver en linje med en stjerne. Så en linje med to stjerner, så en med tre osv.
  Helt til den har skrevet «antall» stjerner på en linje. skrivMangeStjerner bør kalle skrivStjerner
  Om man skriver:skrivMangeStjerner(3):Så skal:
  *
  **
  ***
  Skrives til skjerm
*/
char Star = '*';

void setup() {
  Serial.begin(9600);
}

void skrivStjerner(int antall) {
  for (int i = 0; i < antall; i++) {
    Serial.print(Star);
  }
  Serial.println();
}

void skrivMangeStjerner(int antall) {
  for (int i = 1; i <= antall; i++) {
    skrivStjerner(i);
  }
}

void loop() {
  skrivMangeStjerner(7);
  skriv Stjerner(10);
}
