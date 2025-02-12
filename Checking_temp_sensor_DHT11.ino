#include <DHT.h> // library for DHT Temperature sensor.
DHT Abhinav(4,DHT11); // Creating the object name Abhinav(PinNumber,TypeofDHT)

void setup() {
  Serial.begin(115200); // starting the serial monitor.
  Abhinav.begin(); // starting the temperature sensor.
  delay(2000);
}

void loop() {
  float temp = Abhinav.readTemperature(); // read the value and store.
  Serial.print("Temperature is:");
  Serial.print(temp);
  Serial.print("C.");
  
  delay(5000);
}
