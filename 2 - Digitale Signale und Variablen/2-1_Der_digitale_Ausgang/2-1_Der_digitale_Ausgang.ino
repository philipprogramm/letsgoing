// 2.1 Der digitale Ausgang
// Solution by philipprogramm
// 
// Pins
// 2: RGB-Module (from pin 1, 2 or 3)

void setup(){
    pinMode(2, OUTPUT); // set pin 2 (led on rgb-module) as output
}
void loop(){
    // morse S
    //  Blink 1
    digitalWrite(2, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(2, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 2
    digitalWrite(2, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(2, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 3
    digitalWrite(2, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(2, LOW); // turn led off
    delay(300); // wait 300 ms


    // morse O
    //  Blink 1
    digitalWrite(2, HIGH); // turn led on
    delay(900); // wait 900 ms
    digitalWrite(2, LOW); // turn led off
    delay(900); // wait 900 ms

    //  Blink 2
    digitalWrite(2, HIGH); // turn led on
    delay(900); // wait 900 ms
    digitalWrite(2, LOW); // turn led off
    delay(900); // wait 900 ms

    //  Blink 3
    digitalWrite(2, HIGH); // turn led on
    delay(900); // wait 900 ms
    digitalWrite(2, LOW); // turn led off
    delay(900); // wait 900 ms


    // morse S
    //  Blink 1
    digitalWrite(2, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(2, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 2
    digitalWrite(2, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(2, LOW); // turn led off
    delay(300); // wait 300 ms

    //  Blink 3
    digitalWrite(2, HIGH); // turn led on
    delay(300); // wait 300 ms
    digitalWrite(2, LOW); // turn led off
    delay(300); // wait 300 ms

    // wait for next word
    delay(1200); // wait 1200ms
}