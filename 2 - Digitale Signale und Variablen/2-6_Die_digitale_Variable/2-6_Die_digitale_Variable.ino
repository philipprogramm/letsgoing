// 2.6 Die digitale Variable
// Solution by philipprogramm
// 
// Pins
// 2: RGB-module pin 1
// 7: button-module pin 1, 2 or 3 (depending on which button should be used)

bool buttonMode = LOW; // initialise variable which contains button is pressed/not pressed

void setup(){
    pinMode(2, OUTPUT); // led pin as OUTPUT
    pinMode(7, INPUT); // button-pin as INPUT
}

void loop(){
    digitalWrite(2, buttonMode); // write content of buttonMode variable to digital output
    
    if(digitalRead(7) == HIGH){ // if button is pressed
        buttonMode = !buttonMode; // invert buttonMode variable
        delay(500); // wait to avoid multiple runs with on press of button
    }
}