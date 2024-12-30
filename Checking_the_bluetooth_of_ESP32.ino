/*
This code is for controlling the led of ESP32 using bluetooth.
*/
#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
int Pin = 2;
char getValueFromBluetooth;

void setup() {
  SerialBT.begin("Abhinav_ESP32");
  pinMode(Pin,OUTPUT);
}

void loop() {
    if (SerialBT.available()){
      getValueFromBluetooth = SerialBT.read();
    }
  if (getValueFromBluetooth == '0') {
    digitalWrite(Pin,LOW);
  }
  if (getValueFromBluetooth == '1') {
    digitalWrite(Pin,HIGH);
  }
  delay(30);
}
