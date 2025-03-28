// Pin Definitions
const int motorPin1 = 8;  // Motor control pin 1
const int motorPin2 = 9;  // Motor control pin 2
const int enablePin = 10; // Motor enable (speed control with PWM)
const int irSensorPin = A5; // IR sensor output pin

void setup() {
  // Motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  
  // IR sensor pin as input
  pinMode(irSensorPin, INPUT);
  
  // Start with motor stopped
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 0); // Motor speed = 0
}

void loop() {
  // Read IR sensor
  int sensorValue = digitalRead(irSensorPin);
  
  if (sensorValue == LOW) { // Object detected
    // Turn the motor on (forward direction)
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    analogWrite(enablePin, 255); // Full speed
  } else {
    // Stop the motor
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    analogWrite(enablePin, 0); // Motor speed = 0
  }
}