// declaring pin numbers for each component
int redLed = 12; 
int yellowLed = 11;
int buzzer = 10;
int smokeA0 = A5;

// The threshold value for the gas sensor
int sensorThres = 600;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    tone(buzzer, 1000, 200);
  }
  else
  {
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    noTone(buzzer);
  }
  delay(100);
}
