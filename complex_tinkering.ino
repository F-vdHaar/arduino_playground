// trying out some complex tinkering
// copied from a tutorial

int sensorPin = A0; // sensor on analog pin A0
int ledPin = 13;    // led on pin 13
int sensorValue = 0;

void setup() {
  Serial.begin(9600); // start serial communication
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin); // read the sensor value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);         // print the value to serial monitor

  if (sensorValue > 500) {
    digitalWrite(ledPin, HIGH); // turn led on if sensor value is high
  } else {
    digitalWrite(ledPin, LOW);  // turn led off
  }
  delay(1000);                         // wait for a second
} 