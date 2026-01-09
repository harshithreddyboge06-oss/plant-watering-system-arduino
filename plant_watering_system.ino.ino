#define SENSOR_PIN A0
#define RELAY_PIN 8

int soilMoistureValue = 0;
int threshold = 500;  // Adjust based on your sensor readings

void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  soilMoistureValue = analogRead(SENSOR_PIN);
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoistureValue);

  if (soilMoistureValue < threshold) {
    digitalWrite(RELAY_PIN, HIGH);  // Turn ON pump
    Serial.println("Soil is dry → Pump ON");
  } else {
    digitalWrite(RELAY_PIN, LOW);   // Turn OFF pump
    Serial.println("Soil is wet → Pump OFF");
  }

  delay(1000);
}