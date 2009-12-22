// trying out multiple sensors

int sensor1Pin = A0;
int sensor2Pin = A1; 
int sensor1Value = 0;
int sensor2Value = 0;

void setup()
{
  Serial.begin(9600); // start serial communication
}

void loop() {
  sensor1Value = analogRead(sensor1Pin); 
  sensor2Value = analogRead(sensor2Pin); 
  Serial.print("Sensor 1: ");
  Serial.println(sensor1Value);         
  Serial.print("Sensor 2: ");
  Serial.println(sensor2Value);    

  delay(1000);                          
} 