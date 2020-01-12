// 3.2 Der analoge Eingang
// Solution by philipprogramm
// 
// Pins
// A0: poti-module (only 1 pin avaliable) 
// Note: A stands for analog pin of the arduino

void setup(){
    pinMode(A0, INPUT); // set pin A0 to input
    Serial.begin(9600); // begin serial connection with pc
}
void loop(){
    Serial.println("Poti-Wert: " + String(analogRead(A0))); // read analog input from poti with analogRead(port) and print it to serial console
    delay(1000); // wait 1s with next output
}