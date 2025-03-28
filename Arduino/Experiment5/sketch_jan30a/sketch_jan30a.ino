#include <Servo.h>  // Include the Servo library

// Pin configuration
const int IR_SENSOR_DIGITAL = 2;   // IR sensor digital output pin
const int LED_PIN = 13;             // LED pin
const int SERVO_PIN = 5;            // Servo motor control pin

Servo doorServo;                    // Create a servo object

// Function to initialize components
void setup() {
  // Configure pins
  pinMode(IR_SENSOR_DIGITAL, INPUT);  // Set IR sensor digital pin as input
  pinMode(LED_PIN, OUTPUT);           // Set LED pin as output

  // Attach the servo motor and set its initial position
  doorServo.attach(SERVO_PIN);
  doorServo.write(0);                // Keep the door closed at startup
  digitalWrite(LED_PIN, LOW);        // Turn off the LED initially

  // Start serial communication for debugging
  Serial.begin(9600);
  Serial.println("System Initialized");
}

// Main loop function
void loop() {
  // Read the digital state of the IR sensor
  int irDigitalState = digitalRead(IR_SENSOR_DIGITAL);

  // Debugging: Print sensor value to the Serial Monitor
  Serial.print("Digital Signal: ");
  Serial.println(irDigitalState);

  // If motion is detected (IR sensor digital output is HIGH)
  if (irDigitalState == HIGH) {
    Serial.println("Motion detected! Opening the door...");

    // Turn on the LED while the door is opening/operating
    digitalWrite(LED_PIN, HIGH);

    // Open the door
    doorServo.write(90); // Open the door to 90 degrees
    delay(2000);         // Keep the door open for 2 seconds

    Serial.println("Closing the door...");
    doorServo.write(0);  // Close the door (0 degrees)

    // Turn off the LED after the door is closed
    digitalWrite(LED_PIN, LOW); // Turn off the LED
  } else {
    // No motion detected
    Serial.println("No motion detected. Door is closed.");
    // Ensure the door remains closed
    doorServo.write(0);
    digitalWrite(LED_PIN, LOW); // Turn off the LED when door is closed
  }

  delay(200); // Small delay for stability
}