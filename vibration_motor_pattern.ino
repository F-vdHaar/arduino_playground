// trying a more complex vibration pattern

int motor = 9;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3; i++) {
    digitalWrite(motor, HIGH);
    delay(200);
    digitalWrite(motor, LOW);
    delay(200);
  }
  delay(1000);
  
  for(int i = 0; i < 2; i++) {
    digitalWrite(motor, HIGH);
    delay(500);
    digitalWrite(motor, LOW);
    delay(500);
  }
  delay(1000);
} 