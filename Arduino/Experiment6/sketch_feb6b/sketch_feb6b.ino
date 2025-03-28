#include <Servo.h>

Servo myServo;  // Create a Servo object

const int trigPin = 6;  // Trigger pin for ultrasonic sensor
const int echoPin = 7;  // Echo pin for ultrasonic sensor
const int servoPin = 9;  // Servo control pin
const int ledPin = 13;    // LED control pin

void setup() {
  myServo.attach(servoPin);  // Attach the servo to the pin
  pinMode(trigPin, OUTPUT);   // Set the trigPin as an OUTPUT
  pinMode(echoPin, INPUT);    // Set the echoPin as an INPUT
  pinMode(ledPin, OUTPUT);     // Set the ledPin as an OUTPUT
  Serial.begin(9600);         // Start the Serial communication
}

void loop() {
  long duration, distance;

  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigPin HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance (in cm)
  distance = duration * 0.034 / 2;

  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check the distance and control the servo and LED
  if (distance < 50) {
    myServo.write(90);  // Turn the servo to 90 degrees
    digitalWrite(ledPin, HIGH);  // Turn on the LED
  } else {
    myServo.write(0);   // Turn the servo to 0 degrees
    digitalWrite(ledPin, LOW);   // Turn off the LED
  }

  delay(500);  // Wait for half a second before the next reading
}