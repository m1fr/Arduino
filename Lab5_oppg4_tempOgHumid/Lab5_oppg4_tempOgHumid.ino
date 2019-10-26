/*
Download a library for the DHT11
Collect info about temperature and humidity, and collect them in an array with help of a struct.
Use the info to calculate the average humidity and temperature
*/

#include <dht.h>

dht DHT;

#define DHT11_PIN 7

struct data {
  int temp;
  int humid;
};

const int ant = 10;

void setup() {
  Serial.begin(9600);
}

void loop() {

  delay (1000);
  data mes[ant];
  Serial.print("Starting");

  for (int i = 0; i < ant; i++) {
    int chk = DHT.read11(DHT11_PIN);
    mes[i].temp = DHT.temperature;
    mes[i].humid = DHT.humidity;
    Serial.print("Temperature = ");
    Serial.println(mes[i].temp);
    Serial.print("Humidity = ");
    Serial.println(mes[i].humid);
    delay(2000);
  }

  long humidsum = 0;
  long tempsum = 0;
  for (int i = 0; i < ant; i++)
    humidsum += mes[i].humid;

  for (int i = 0; i < ant; i++)
    tempsum += mes[i].temp;


  int humidavrg = humidsum / ant;
  float tempavrg = tempsum / ant;

  Serial.print("Humidity avarage:");
  Serial.print(humidavrg);
  Serial.println('%');
  Serial.print("Temperature avarage:");
  Serial.print(tempavrg);
  Serial.println("celsius");


  //Serial.println(snitt(mes[ant].humid));
  //Serial.println(snitt(mes[ant].temp));

  while (1);
}

float snitt(int a[])
{
  long sum = 0;
  for (int i = 0; i < ant; i++)
    Serial.println(a[i]);

  return sum / ant;
}
