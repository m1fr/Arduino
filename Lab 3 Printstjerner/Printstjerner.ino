/*
   Lag en funksjon skrivStjerner(int antall) som skriver * på skjermen «antall» ganger. Så skal den skrive ut et linjeskift.Om man skriver:skrivStjerner(7);Så skal:*******Skrives til skjerm
  Lag funksjonenskrivMangeStjerner(intantall) somførstskriverenlinjemed enstjerne. Såenlinjemed to stjerner, såenmed treosv.
  Helttilden harskreven«antall» stjernerpåenlinje.skrivMangeStjernerbørkalle(bruke) skrivStjernerOm man skriver:skriv MangeStjerner(3):Såskal:******Skrives til skjerm
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
}
