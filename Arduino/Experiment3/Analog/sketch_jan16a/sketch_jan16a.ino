// Define the pin for the IR sensor
const int irSensorPin = A0; // Analog pin for IR sensor
// Define the pin for the external LED
const int ledPin = 13;       // Digital pin for external LED

// Define the threshold for obstacle detection
const int threshold = 600;   // Adjust this value based on your sensor's output

void setup() {
  // Start the serial communication
  Serial.begin(9600);
  
  // Set the external LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value from the IR sensor
  int sensorValue = analogRead(irSensorPin);
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  // Check if the sensor value is below the threshold
  if (sensorValue < threshold) {
    // Turn the external LED on if an obstacle is detected
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn the external LED off if no obstacle is detected
    digitalWrite(ledPin, LOW);
  }
  
  // Wait a short time before the next reading
  delay(100);
}