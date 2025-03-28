#include <Servo.h>

Servo myServo;  // Create a Servo object
const int ledPin = 13;  // Pin for the LED

void setup() {
  myServo.attach(5);  // Attach the servo on pin 9
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
  Serial.begin(9600);
}

void loop() {
  Serial.print("Move from 0 to 180 degrees (clockwise): ");
  for (int pos = 0; pos <= 180; pos++) {
    Serial.println(pos);
    myServo.write(pos);  // Set the servo position
    digitalWrite(ledPin, HIGH);  // Turn the LED on
    delay(15);           // Wait for the servo to reach the position
  }

  delay(1000); // Wait for 1 second at 180 degrees

  Serial.print("Move from 180 to 0 degrees (counterclockwise): ");
  for (int pos = 180; pos >= 0; pos--) {
    Serial.println(pos);
    myServo.write(pos);  // Set the servo position
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(15);           // Wait for the servo to reach the position
  }

  delay(10); // Wait for 1 second at 0 degrees
}