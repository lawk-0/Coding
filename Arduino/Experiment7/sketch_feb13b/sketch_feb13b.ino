// Pin definitions
const int IN1 = 2; // Motor driver IN1 pin
const int IN2 = 3; // Motor driver IN2 pin
const int ENA = 4; // Motor driver ENA pin (PWM)

// Setup function
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

// Loop function
void loop() {
  // Rotate motor clockwise
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 255); // Full speed
  delay(2000); // Run for 2 seconds

  // Stop the motor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000); // Stop for 1 second

  // Rotate motor counterclockwise
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 255); // Full speed
  delay(2000); // Run for 2 seconds

  // Stop the motor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000); // Stop for 1 second
}