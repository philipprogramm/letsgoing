// 3.7 Übungsprojekt
// Solution by philipprogramm
// 
// Pins
// A0: poti-module (only 1 pin avaliable)
// 6: rgb-module pin 1 (blue)
// 5: rgb-module pin 2 (red)
// 3: rgb-module pin 3 (green)
// Note: A stands for analog pin of the arduino

int farbe1 = 0;
int farbe2 = 255;

void setup() {
    pinMode(A0, INPUT); // set poti-pin as INPUT
    pinMode(6, OUTPUT); // set rgb-pins as OUTPUT
    pinMode(5, OUTPUT);
}

void loop(){
    int farbe1 = map(analogRead(A0), 0, 1023, 0, 255); // map poti input into variable farbe1
    int farbe2 = 255 - map(analogRead(A0), 0, 1023, 0, 255); // map poti into variable but inverted
    analogWrite(5, farbe1); // write color-values to analog
    analogWrite(6, farbe2);
}