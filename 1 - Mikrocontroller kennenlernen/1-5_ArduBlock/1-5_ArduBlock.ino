// 1.5 ArduBlock
// Solution by philipprogramm
// 
// Pins:
// none

void setup(){
    pinMode(13, OUTPUT); // set pin 13 (onboard led) as output
}
void loop(){
    digitalWrite(13, HIGH); // turn led on
    delay(1000); // wait 1s
    digitalWrite(13, LOW); // turn led on
    delay(1000); // wait 1s
}