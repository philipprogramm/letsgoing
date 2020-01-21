// 4.4 Unterprogramme
// Solution by philipprogramm
// 
// Pins
// A0: poti-module (only 1 pin avaliable)
// 6: rgb-module pin 1 (blue)
// 5: rgb-module pin 2 (red)
// Note: A stands for analog pin of the arduino

int farbe1 = 0;
int farbe2 = 255;

void setup() {
    pinMode(A0, INPUT); // set poti-pin as INPUT
    pinMode(6, OUTPUT); // set rgb-pins as OUTPUT
    pinMode(5, OUTPUT);
}

void loop(){
    readPoti();
    writeLed();
}

// function to read the poti-value to variables farbe1 and farbe2
void readPoti(){
    int farbe1 = map(analogRead(A0), 0, 1023, 0, 255); // map poti input into variable farbe1
    int farbe2 = 255 - map(analogRead(A0), 0, 1023, 0, 255); // map poti into variable but inverted
}

// function to write values to led
void writeLed(){
    analogWrite(5, farbe1); // write color-values to analog
    analogWrite(6, farbe2);
}