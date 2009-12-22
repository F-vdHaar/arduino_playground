// trying an even more complex vibration pattern

int sensor = A0;
int motor = 9;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  int val = analogRead(sensor);
  int intensity = map(val, 0, 1023, 0, 255);
  analogWrite(motor, intensity);
  delay(50);
} 