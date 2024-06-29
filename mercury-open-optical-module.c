/*
    Project name : Arduino Uno Mercury Open Optical Module
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-mercury-open-optical-module
*/

// Pin connected to the Mercury open optical module's signal output
const int sensorPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(sensorPin, INPUT_PULLUP);  // Set sensor pin as input with internal pull-up resistor
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read sensor state

  if (sensorValue == LOW) {
    Serial.println("Module is open");
  } else {
    Serial.println("Module is closed");
  }

  delay(500);  // Delay for readability
}
