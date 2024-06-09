/*
    Project name : Mercury open optical module
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-mercury-open-optical-module
*/

// Define the LED and switch pins
const int led_pin = 13;
const int switch_pin = 3;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
  
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the state of the mercury tilt switch
  int switchState = digitalRead(switch_pin);
  
  // Check if the switch is tilted
  if (switchState == HIGH) {
    digitalWrite(led_pin, HIGH); // Turn on LED
    Serial.println("Switch tilted - LED ON");
  } else {
    digitalWrite(led_pin, LOW); // Turn off LED
    Serial.println("Switch not tilted - LED OFF");
  }
  
  delay(100); // Delay for stability and to reduce Serial Monitor spam
}
