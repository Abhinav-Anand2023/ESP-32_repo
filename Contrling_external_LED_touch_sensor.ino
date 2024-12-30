/*
This code is for controlling the extrenal LED using touch sensor(Conneted at GPIO pin number 4).
*/

// void setup() {
//     Serial.begin(115200);
// }

// void loop() {
//     Serial.println(touchRead(T0));
//     delay(1000);
// }
// above code is for checking the touch sensor.


int ledPin = 2; // for trun on and off the LED I connected it with the GPIP pin number 2.
void setup(){
    pinMode(ledPin,OUTPUT);
    digitalWrite(ledPin,LOW);
}
void loop(){
    if(touchRead(T0)<30){ // This is the value that we are getting after touching the GPIO pin 4.
      digitalWrite(ledPin,HIGH);
    }
    else{
      digitalWrite(ledPin,LOW);
    }
}