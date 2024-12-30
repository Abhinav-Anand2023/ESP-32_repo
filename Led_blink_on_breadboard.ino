// Define the GPIO pin connected to the LED
int ledPin = 2; // You can change this to the pin you connected the LED to
int d = 20;
void setup() {
  // Initialize the GPIO pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  delay(d);

  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(d);
}
