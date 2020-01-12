// 2.2 Kontrollstrukturen: Wiederhole
// Solution by philipprogramm
// 
// Pins
// 2: RGB-Module (from pin 1, 2 or 3)

void setup(){
    pinMode(2, OUTPUT); // set led of rgb-module to output
}
void loop (){
    for (int i=0; i<3; i++){ // Repeat 3 times (while i<3)
        digitalWrite(2, HIGH); // turn led on
        delay(500); // wait 500ms
        digitalWrite(2, LOW); // turn led off
        delay(500); // wait 500ms
    }
    delay(1500); // wait 1500ms cause the last delay isn't seen => otherwise we would wait 2,5s
}
