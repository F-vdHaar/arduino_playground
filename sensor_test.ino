// Sensor test: use analog input to control LED
// Learning about analog input and mapping values

const int sensorPin = A0;    // analog input pin
const int ledPin = 9;        // PWM pin for LED

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // for debugging
}

void loop() {
  // read the sensor value
  int sensorValue = analogRead(sensorPin);
  
  // map the sensor value (0-1023) to LED brightness (0-255)
  int brightness = map(sensorValue, 0, 1023, 0, 255);
  
  // set LED brightness
  analogWrite(ledPin, brightness);
  
  // print values for debugging
  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" Brightness: ");
  Serial.println(brightness);
  
  delay(100);  // small delay for stability
} 