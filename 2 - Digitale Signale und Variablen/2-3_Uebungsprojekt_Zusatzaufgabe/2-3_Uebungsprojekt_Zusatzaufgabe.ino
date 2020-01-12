// 2.3 Übungsprojekt Zusatzaufgabe
// Solution by philipprogramm
// 
// Pins
// 2: RGB-module pin 1
// 3: RGB-module pin 2
// 4: RGB-module pin 3
//
// Note: This is the same as 2.3, but every letter is shown in an other color

void setup(){
    pinMode(2, OUTPUT); // Set pins 2, 3 and 4 as output for RGB
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop(){
    // Morse S
    for(int i=0; i<3; i++){ // Repeat 3 times
        digitalWrite(2, HIGH); // led on
        delay(300); // wait 300ms
        digitalWrite(2, LOW); // led off
        delay(300); // wait 300ms
    }

    // Morse O
    for(int i=0; i<3; i++){ // Repeat 3 times
        digitalWrite(3, HIGH); // led on
        delay(900); // wait 900ms
        digitalWrite(3, LOW); // led off
        delay(900); // wait 900ms
    }

    // Morse S
    for(int i=0; i<3; i++){ // Repeat 3 times
        digitalWrite(4, HIGH); // led on
        delay(300); // wait 300ms
        digitalWrite(4, LOW); // led off
        delay(300); // wait 300ms
    }

    // wait for next word
    delay(1200); // wait 1200ms
}