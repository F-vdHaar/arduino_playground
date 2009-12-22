// finally works! used pin 9 instead of 13
// learned that analogWrite only works on PWM pins

int ledPin = 9; // led on pin 9 (PWM pin)
int brightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (brightness = 0; brightness < 255; brightness += 5) {
    analogWrite(ledPin, brightness); // now it fades!
    delay(30);
  }
  for (brightness = 255; brightness > 0; brightness -= 5) {
    analogWrite(ledPin, brightness);
    delay(30);
  }
} 