#include "HX711.h"

const int PUL = 8;   // Step pin
const int DIR = 10;  // Direction pin
const int EN  = 11;  // Enable pin
const int DT = 7;
const int SCKK = 6;

HX711 scale;

void setup() {
  Serial.begin(9600);
  pinMode(PUL, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(EN, LOW);  // Enable the driver
  digitalWrite(DIR, HIGH); // Set rotation direction
  
  scale.begin(DT, SCKK);
  Serial.println("Initializing scale...");
  delay(2000);

  if (!scale.is_ready()) {
    Serial.println("HX711 not found.");
    while (1);
  }

  scale.set_scale(); 
  scale.tare();   // Zeroing the scale
}

long i = 0;

void loop() {
  digitalWrite(PUL, HIGH);
  delayMicroseconds(5);  // Pulse width
  digitalWrite(PUL, LOW);
  delay(2000);           // Step interval
  
  Serial.println(scale.get_units());
  i++;
  if (i == 60) delay(90000);  // Pause after 60 readings
  delay(200);
}



