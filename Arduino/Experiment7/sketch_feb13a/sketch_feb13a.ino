const int motorForward = 2;  // IN1
const int motorBackward = 3;  // IN2
const int enableMotor = 6;  // ENA (optional)

void setup() {
  pinMode(motorForward, OUTPUT);
  pinMode(motorBackward, OUTPUT);
  pinMode(enableMotor, OUTPUT);
}

void loop() {
  // Example: Move motor forward at full speed
  digitalWrite(motorForward, HIGH);
  digitalWrite(motorBackward, LOW);
  analogWrite(enableMotor, 255);  // Set speed to 100% (optional)

  delay(1000);  // Wait for 1 second

  // Example: Move motor backward at half speed
  digitalWrite(motorForward, LOW);
  digitalWrite(motorBackward, HIGH);
  analogWrite(enableMotor, 128);  // Set speed to 50% (optional)

  delay(1000);  // Wait for 1 second

  // Stop motor
  digitalWrite(motorForward, LOW);
  digitalWrite(motorBackward, LOW);
}