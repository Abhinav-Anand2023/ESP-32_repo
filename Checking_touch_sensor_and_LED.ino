/*
This code is for checking the touch sensor and then turn on the LED using touch sensor.
*/

// void setup() {
//     Serial.begin(115200);
// }

// void loop() {
//     Serial.println(touchRead(T0)); // connecting a wire on GPIO pin 4. touchRead is an builtIn function.
//     delay(1000);
// }
// Upper code is to check what values are coming when we touch the pin 4. its coming 30 and less than 30.

// Now using this we can use touch to on the built-in LED on or off.

int ledPin = 2; // because built-in LED is connected to GPIO pin number 2.

void setup(){
  pinMode(ledPin,OUTPUT);
}
void loop(){
  if(touchRead(T0) < 30){
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
}
