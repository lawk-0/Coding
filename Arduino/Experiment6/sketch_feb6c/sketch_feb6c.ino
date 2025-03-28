#include <Servo.h>

// constants won't change
const int TRIG_PIN  = 6;  // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int ECHO_PIN  = 7;  // Arduino pin connected to Ultrasonic Sensor's ECHO pin
const int SERVO_PIN = 9;  // Arduino pin connected to Servo Motor's pin
const int LED_PIN   = 13; // Arduino pin connected to LED
const int DISTANCE_THRESHOLD = 50; // centimeters

Servo servo; // create servo object to control a servo

// variables will change:
long duration_us;
float distance_cm;

void setup() {
  Serial.begin(9600);        // initialize serial port
  pinMode(TRIG_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(ECHO_PIN, INPUT);  // set arduino pin to input mode
  pinMode(LED_PIN, OUTPUT);  // set pin 13 (LED) to output mode
  servo.attach(SERVO_PIN);   // attaches the servo on pin 9 to the servo object
  servo.write(0);            // initialize the servo to 0 degrees
}

void loop() {
  // generate a 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, LOW);  // ensure TRIG is low
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH); // send a HIGH signal
  delayMicroseconds(10);        // keep the HIGH signal for 10 microseconds
  digitalWrite(TRIG_PIN, LOW);  // set TRIG pin back to LOW

  // measure the duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH); 

  // calculate the distance in centimeters
  distance_cm = duration_us * 0.0344 / 2; // using the formula: distance = (duration * 0.0344) / 2

  // check if distance is below the threshold
  if (distance_cm < DISTANCE_THRESHOLD) {
    servo.write(90);  // rotate servo motor to 90 degrees
    digitalWrite(LED_PIN, HIGH);  // turn LED ON
  } else {
    servo.write(0);   // rotate servo motor to 0 degrees
    digitalWrite(LED_PIN, LOW);   // turn LED OFF
  }

  // print the distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(1500); // delay for half a second
}