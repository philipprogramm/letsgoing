// 4.1 Kontrollstrukturen: Solange
// Solution by philipprogramm
// 
// Pins
// 7: button-module
// 6: rgb-module pin 1 (blue)


void setup(){
    pinMode(7, INPUT); // set pin 7 as button-INPUT
    pinMode(6, OUTPUT); // set pin 6 as output for led-module
}
void loop(){
    while (digitalRead(7) == HIGH){ // while button is pressed
        digitalWrite(6, HIGH); // blink
        delay(500);
        digitalWrite(6, LOW);
        delay(500);
    }
}