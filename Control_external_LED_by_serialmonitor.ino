/*
This code is for controlling the external LED using serial Monitor.
*/
String cmd;
int ledPin = 2;

void setup() {
    pinMode(ledPin,OUTPUT); 
    digitalWrite(ledPin,LOW); // initialling the LED as off.
    Serial.begin(115200);
}

void loop() {
    if (Serial.available()){
      cmd = Serial.readString();
      if(cmd == "ON"){
        digitalWrite(ledPin,HIGH);
      }
      else if(cmd == "OFF"){
        digitalWrite(ledPin,LOW);
      }
    }
}
