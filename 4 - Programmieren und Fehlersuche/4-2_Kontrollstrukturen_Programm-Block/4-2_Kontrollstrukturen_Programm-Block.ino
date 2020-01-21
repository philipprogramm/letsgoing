// 4.2 Kontrollstrukturen: Programm-Block
// Solution by philipprogramm
// 
// Pins
// 7: button-module
// 6: rgb-module pin 1 (blue)

void setup(){
    pinMode(7, INPUT); // set pin 7 as button-INPUT
    pinMode(6, OUTPUT); // set pin 6 as output for led-module
    digitalWrite(6, HIGH); // turn led on
    while(digitalRead(7) == LOW){}; // while button isn't pressed, this will run
}
void loop(){
    digitalWrite(6, LOW);  // blink
    delay(1000);
    digitalWrite(6, HIGH);
    delay(1000);
}