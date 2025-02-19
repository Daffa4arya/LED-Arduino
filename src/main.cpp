#include <Arduino.h>

int ledMerah = 8;
int ledKuning = 9;
int ledHijau = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop()
{
  digitalWrite(ledMerah, HIGH);
  delay(6000);
  digitalWrite(ledMerah, LOW);

  digitalWrite(ledKuning, HIGH);
  delay(1200);
  digitalWrite(ledKuning, LOW);

  digitalWrite(ledHijau, HIGH);
  delay(4000);
  digitalWrite(ledHijau, LOW);

  digitalWrite(ledKuning, HIGH);
  delay(1200);
  digitalWrite(ledKuning, LOW);
}