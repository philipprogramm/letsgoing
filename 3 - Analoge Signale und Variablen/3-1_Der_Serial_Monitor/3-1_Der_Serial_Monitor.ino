// 3.1 Der Serial Monitor
// Solution by philipprogramm
// 
// Pins
// 7: button-module pin 1,2 or 3 (depending on which button should be used)

void setup(){
    pinMode(7, INPUT); // define pin 7 as input (button)
    Serial.begin(9600); // start serial connection to pc
}

void loop(){
    Serial.println("Zustand des Tasters: " + String(digitalRead(7))); // send message with 1 for pressed and 0 for not pressed to pc
    delay(1000); // wait 1s with next output
}