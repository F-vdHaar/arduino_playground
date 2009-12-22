// heart rate sensor with vibration motor

int sensor = A0;
int motor = 9;
int led = 13;
int lastBeat = 0;
int beatCount = 0;
int lastMinute = 0;
int maxVal = 0;
int minVal = 1023;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int val = analogRead(sensor);
  int currentTime = millis();
  
  if(val > maxVal) maxVal = val;
  if(val < minVal) minVal = val;
  
  int intensity = map(val, 400, 800, 0, 255);
  intensity = constrain(intensity, 0, 255);
  
  if(val > 500) {
    digitalWrite(led, HIGH);
    if(currentTime - lastBeat > 200) {
      beatCount++;
      analogWrite(motor, intensity);
      delay(50);
      digitalWrite(motor, LOW);
      lastBeat = currentTime;
    }
  } else {
    digitalWrite(led, LOW);
  }
  
  if(currentTime - lastMinute >= 60000) {
    beatCount = 0;
    lastMinute = currentTime;
    maxVal = 0;
    minVal = 1023;
  }
  
  delay(10);
} 