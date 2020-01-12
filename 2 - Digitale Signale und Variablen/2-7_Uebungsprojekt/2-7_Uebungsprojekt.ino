// 2.7 Übungsprojekt
// Solution by philipprogramm
// 
// Pins
// 2: RGB-module pin 1 (blue)
// 3: RGB-module pin 2 (red)
// 4: RGB-module pin 3 (green)
// 5: button-module pin 3 (green)
// 6: button-module pin 2 (red)
// 7: button-module pin 1 (blue)
//
// Note: there are multiple ways to get the exercise working.

bool blue = LOW; // initialise variables for states of the led's
bool red = LOW;
bool green = LOW;

void setup(){
    pinMode(2, OUTPUT); // set pin modes for rgb-module as outputs
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, INPUT);  // set pin modes for button-module as outputs
    pinMode(6, INPUT);
    pinMode(7, INPUT);
}

void loop(){
    // set leds to value of variables
    digitalWrite(2, blue);
    digitalWrite(3, red);
    digitalWrite(4, green);

    // if blue button is pressed
    if (digitalRead(7) == HIGH){
        blue = !blue; // invert variable
        delay(500); // wait to avoid multiple runs
    }

    // if red button is pressed
    if (digitalRead(6) == HIGH){
        red = !red; // invert variable
        delay(500); // wait to avoid multiple runs
    }

    // if green button is pressed
    if (digitalRead(5) == HIGH){
        green = !green; // invert variable
        delay(500); // wait to avoid multiple runs
    }
}