// Define pin numbers
const int LDR_PIN = A0; // LDR sensor connected to analog pin A0
const int LED_PIN = 2;  // LED connected to digital pin 2

// Define threshold value for LDR
const int THRESHOLD = 500; // Adjust this value based on ambient light conditions

void setup() {
  // Initialize LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Read the data from LDR sensor
  int sensorValue = analogRead(LDR_PIN);
  
  // Control LED based on LDR data
  if (sensorValue < THRESHOLD) {
    // If LDR value decreases below threshold, turn on LED (indicating darkness)
    digitalWrite(LED_PIN, HIGH);
  } else {
    // If LDR value increases above threshold, turn off LED (indicating daylight)
    digitalWrite(LED_PIN, LOW);
  }
  
  // Add a delay to prevent rapid fluctuations
  delay(1000);
}
