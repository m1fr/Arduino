/*
 Play around with Strings and it's functions
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  String S = "Hei på deg";
  Serial.println(S);

  Serial.println("Skriv ditt navn");
  while (!Serial.available()); //venter på at brukeren skriver noe inn
  String S2 = Serial.readString();

  Serial.print("Aha, så du heter ");
  Serial.println(S2);
  Serial.print("din andre bokstav er: ");
  Serial.println(S2.charAt(1));
  //en kan også si S2[1] for String oppfører seg litt som et array

  
  int index = S2.indexOf('e');
  if (index >= 0) {
    Serial.print("Du har en e på plass nr: ");
    Serial.println(index+1);
  }
  else if (index = -1){
    Serial.println("Det finnes ikke en e i denne stningen");
  }

  rplace(S2, 'e', 'i');

  slett(S2, '(', ')');
  
  //slå sammen tekster
  String S3 = S + S2;
  S3.concat('.');

  String S4 = revAndCap(S2);
  Serial.println(S4);

  for (int i = 97; i <= 122; i++) {
    Serial.print(char(i - ('a' - 'A')));
  }
  while (1); //samme som å si stop, mens dette er, ikke gjør noe
}

//speilvend teksten
String reverse(String org) {
  String rev = "";
  for (int i = 0; i < org.length(); i++) {
    rev = org[i] + rev;
  }
  return rev;
}

String capFirst(String org) {
  org.toLowerCase();
  String firstLetter = (String)org[0];
  firstLetter.toUpperCase();
  char c = firstLetter[0];
  org[0] = c;
  return org;
  // få til å få alle tegn før  et mellomrom og første bokstav til stor?
}

String capFirst_v2(String org) {
  org.toLowerCase();
  char c = org[0];
  c = c - ('a' - 'A'); //dette er det samme som -32 sjekk ascii tabell
  org[0] = c;
  return org;
}

String revAndCap(String org) {
  String fixed;
  fixed = reverse(org);
  fixed = capFirst_v2(fixed);
  return fixed;
}

void rplace(String wrote, char a, char b){
  Serial.print("Du skrev orginalt: ");
  Serial.print(wrote);
  wrote.replace(a, b);
  Serial.println(". La oss bytte alle e'r til i: ");
  Serial.println(wrote);
}

void slett(String wrote, char a, char b){
   int findFirst = wrote.indexOf(a);
   int findLast = wrote.indexOf(b);
   while(findFirst != -1 && findLast != -1) {
    int count = findLast - findFirst +1;
    wrote.remove(findFirst, count);
    findFirst = wrote.indexOf(a);
   findLast = wrote.indexOf(b);
   }
   Serial.print("mente du ");
   Serial.println(wrote);
}
