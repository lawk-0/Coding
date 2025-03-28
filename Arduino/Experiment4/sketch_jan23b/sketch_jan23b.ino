#include <Servo.h> // Include the Servo library

// Pin definitions
const int ledPin = 13;        // Pin for LED
const int servoPin = 5;       // Pin for Servo motor

Servo myServo; // Create a Servo object

void setup() {
  pinMode(ledPin, OUTPUT);    // Set LED pin as output
  myServo.attach(servoPin);   // Attach the servo to the pin
}

void loop() {
  // Blink LED
  digitalWrite(ledPin, HIGH);  // Turn LED on
  delay(500);                  // Wait for 500 milliseconds
  digitalWrite(ledPin, LOW);   // Turn LED off
  delay(500);                  // Wait for 500 milliseconds

  // Move servo motor
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);       // Set the servo to the current angle
    delay(15);                  // Wait for the servo to reach the position
  }
  
  delay(1000);  // Wait for 1 second before moving back
  
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);       // Set the servo to the current angle
    delay(15);                  // Wait for the servo to reach the position
  }

  delay(1000);  // Wait before repeating the loop
}