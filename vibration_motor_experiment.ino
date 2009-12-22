// trying out a vibration motor

int motorPin = 9; // vibration motor on pin 9 (PWM pin)

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH); 
  delay(1000);                  
  digitalWrite(motorPin, LOW); 
  delay(1000);                  
} 