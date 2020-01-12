// 2.3 Übungsprojekt
// Solution by philipprogramm
// 
// Pins
// 2: RGB-module pin 1

void setup(){
    pinMode(2, OUTPUT); // Set pin 2 as output

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
        digitalWrite(2, HIGH); // led on
        delay(900); // wait 900ms
        digitalWrite(2, LOW); // led off
        delay(900); // wait 900ms
    }

    // Morse S
    for(int i=0; i<3; i++){ // Repeat 3 times
        digitalWrite(2, HIGH); // led on
        delay(300); // wait 300ms
        digitalWrite(2, LOW); // led off
        delay(300); // wait 300ms
    }

    // wait for next word
    delay(1200); // wait 1200ms
}