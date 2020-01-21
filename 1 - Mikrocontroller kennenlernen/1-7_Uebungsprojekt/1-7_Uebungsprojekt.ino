// 1.7 Übungsprojekt
// Solution by philipprogramm
// 
// Pins
// none

void setup(){
    pinMode(13, OUTPUT); // set pin 13 (onboard led) as output
}
void loop(){
    // morse S
    //  Blink 1
    digitalWrite(13, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(13, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 2
    digitalWrite(13, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(13, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 3
    digitalWrite(13, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(13, LOW); // turn led off
    delay(300); // wait 300 ms


    // morse O
    //  Blink 1
    digitalWrite(13, HIGH); // turn led on
    delay(900); // wait 900 ms
    digitalWrite(13, LOW); // turn led off
    delay(900); // wait 900 ms

    //  Blink 2
    digitalWrite(13, HIGH); // turn led on
    delay(900); // wait 900 ms
    digitalWrite(13, LOW); // turn led off
    delay(900); // wait 900 ms

    //  Blink 3
    digitalWrite(13, HIGH); // turn led on
    delay(900); // wait 900 ms
    digitalWrite(13, LOW); // turn led off
    delay(900); // wait 900 ms


    // morse S
    //  Blink 1
    digitalWrite(13, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(13, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 2
    digitalWrite(13, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(13, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 3
    digitalWrite(13, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(13, LOW); // turn led off
    delay(300); // wait 300 ms

    // wait for next word
    delay(1200); // wait 1200ms
}