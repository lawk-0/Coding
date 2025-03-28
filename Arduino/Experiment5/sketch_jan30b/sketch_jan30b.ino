#include <Servo.h>

Servo myServo;  // Create a Servo object

const int irPin = 2;      // Pin for IR sensor (obstacle detection)
const int ledPin = 13;    // Pin for LED
const int servoPin = 5;   // Pin for servo motor

void setup() {
  myServo.attach(servoPin);  // Attach the servo motor to pin 9
  pinMode(irPin, INPUT);     // Set IR sensor pin as input
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
  digitalWrite(ledPin, LOW); // Turn LED off initially
  myServo.write(0);         // Set servo to initial position (0 degrees)

  Serial.begin(9600);        // Start the serial communication for debugging
}

void loop() {
  int irState = digitalRead(irPin);  // Read the state of the IR sensor (obstacle detected or not)

  // Debugging: Print the state of the IR sensor
  Serial.println(irState);  

  if (irState == HIGH) {  // If the IR sensor detects an obstacle (HIGH state)
    digitalWrite(ledPin, HIGH);  // Turn the LED on (obstacle detected)
    myServo.write(90);          // Move servo to 90 degrees
    delay(500);                 // Wait for 0.5 seconds
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(500);                 // Wait for 0.5 seconds (blink effect)
  } else {  // If no obstacle is detected (LOW state)
    digitalWrite(ledPin, LOW);  // Turn the LED off
    myServo.write(0);           // Move servo back to 0 degrees
    delay(500);                 // Wait for 0.5 seconds (pause between movements)
  }
}