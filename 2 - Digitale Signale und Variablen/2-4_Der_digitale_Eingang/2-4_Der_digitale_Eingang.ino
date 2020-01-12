// 2.4 Der digitale Eingang
// Solution by philipprogramm
// 
// Pins
// 2: RGB-module pin 1
// 7: button-module pin 1, 2 or 3 (depending on which button should be used)

void setup(){
    pinMode(2, OUTPUT); // set led pin as OUTPUT
    pinMode(7, INPUT); // set button pin as INPUT
}

void loop(){
    digitalWrite(2, digitalRead(7)); // Read (digitalRead) button state and write to led
}