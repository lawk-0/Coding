// Define pins for the ultrasonic sensor
const int trigPin = 3; // Pin connected to the TRIG pin
const int echoPin = 2; // Pin connected to the ECHO pin

int f=0;

// Define pin for the LED
const int ledPin = 13; // Pin connected to the LED (built-in LED on most boards)

// Variables for storing distance
long duration;
float distance;

// Distance threshold (in cm) for turning on the LED
const float thresholdDistance = 20.0; // Adjust as needed

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set up the ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Set up the LED pin
  pinMode(ledPin, OUTPUT);

  // Display initialization message
  Serial.println("Ultrasonic Distance Measurement with LED Indicator Initialized");
}

void loop() {
  // Clear the TRIG pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor by sending a HIGH pulse for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echo pin, and calculate the duration in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance = (duration * 0.0343) / 2;

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Turn on the LED if the distance is within the threshold
  if (distance > 0 && distance <= thresholdDistance) {
    digitalWrite(ledPin, HIGH); // LED ON
    Serial.println("Object detected within threshold! LED ON");
    if(f==1)f=0;
    else f=1;
  } 
  else if (f==1){
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW); // LED OFF
    Serial.println("No object within threshold. LED OFF");
  }

  // Add a delay for stability
  delay(500);
}