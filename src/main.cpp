#include <Arduino.h>

// led pin
const int ledPin = 13;

void setup() {
  // being serial
  Serial.begin(115200);
  Serial.println("Serial test begin.");
}

void loop() {
  // echo received data
  if (Serial.available()) {
    int byteReceived = Serial.read();
    Serial.write(byteReceived); // echo back the received byte

    // blink the built-in LED to indicate activity
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
  }
}