#include <Arduino.h>

void setup() {
  // LED_BUILTIN
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  //Enciende Led de la placa
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  if(digitalRead(4)){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
  }
}