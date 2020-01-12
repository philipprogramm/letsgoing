// 3.4 Übungsprojekt
// Solution by philipprogramm
// 
// Pins
// A0: poti-module (only 1 pin avaliable)
// 6: rgb-module pin 1 (blue)
// 5: rgb-module pin 2 (red)
// 3: rgb-module pin 3 (green)
// Note: A stands for analog pin of the arduino

int potiWert = 0; // initialise poti-value/8 variable

void setup(){
    pinMode(6, OUTPUT); // rgb-pins as outputs
    pinMode(5, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(A0, INPUT); // poti-pin as input

    Serial.begin(9600); // begin serial monitor
}

void loop(){
    // input & processing
    potiWert = (analogRead(A0) / 8);

    // print to serial monitor
    Serial.println(potiWert);

    // set color of rgb-module
    if (potiWert == 0){ // off
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        digitalWrite(3, LOW);
    } else if (potiWert == 1){ // red
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(3, LOW);
    } else if (potiWert == 2){ // yellow
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(3, HIGH);
    } else if (potiWert == 3){ // green
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(3, HIGH);
    } else if (potiWert == 4){ // cyan
        digitalWrite(6, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(3, HIGH);
    } else if (potiWert == 5){ // blue
        digitalWrite(6, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(3, LOW);
    } else if (potiWert == 6){ // magenta
        digitalWrite(6, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(3, LOW);
    } else if (potiWert == 7){ // white
        digitalWrite(6, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(3, HIGH);
    }
}