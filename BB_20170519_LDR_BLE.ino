// Test Code to test the LDR from https://diyhacking.com/arduino-ldr-sensor/
// Adapted to read more LDRs and to show via LEDs which one is under a certain
// Value

int sensorPin01 = A0; // select the input pin for LDR01
int sensorValue01 = 0; // variable to store the value coming from the sensor01
int LED01 = 10;

int reference = 800;


void setup() {
  Serial.begin(9600); //sets serial port for communication
  pinMode(LED01, OUTPUT);
}

void loop() {
  sensorValue01 = analogRead(sensorPin01); // read the value from the sensor01
  Serial.print("SENSOR_01: ");
  Serial.println(sensorValue01); //prints the values coming from the sensor01 on the screen
  if (sensorValue01 < reference) {
    digitalWrite(LED01, HIGH);
  }
  else {
    digitalWrite(LED01, LOW);
  }
  delay(100);
}
