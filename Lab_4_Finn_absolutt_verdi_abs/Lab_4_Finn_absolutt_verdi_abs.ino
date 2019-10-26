/*Lag funksjonene abs1 og abs2 som begge skal regne ut absoluttverdien av tallene slik at
27 blir skrevet ut. Du skal ikke endre noe i loopen.
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall1 = -2; 
  int tall2 = -7; 
  
  //så kaller jeg noen funksjoner
  tall1 = abs1(tall1); 
  abs2(&tall2);
  
  Serial.print(tall1); 
  Serial.print(tall2); 
}

int abs1(int tall){
  return abs(tall);
}

void abs2(int* tall){
  *tall = abs(*tall);
}
