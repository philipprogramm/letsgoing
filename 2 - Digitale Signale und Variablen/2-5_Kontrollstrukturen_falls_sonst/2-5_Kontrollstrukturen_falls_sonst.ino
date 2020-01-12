// 2.5 Kontrollstrukturen: falls/sonst
// Solution by philipprogramm
// 
// Pins
// 2: RGB-module pin 1
// 3: RGB-module pin 2
// 7: button-module pin 1, 2 or 3 (depending on which button should be used)

void setup(){
    pinMode(2, OUTPUT); // rgb-pins as outputs
    pinMode(3, OUTPUT);
    pinMode(7, INPUT); // button pin as input
}

void loop(){
    if (digitalRead(7) == HIGH){ // if button is pressed
        digitalWrite(3, LOW); // turn off led on pin 3
        digitalWrite(2, HIGH); // turn on led on pin 2
    } else { // if the button isn't pressed
        digitalWrite(2, LOW); // turn off led on pin 2
        digitalWrite(3, HIGH); // turn on led on pin 3
    }
}