// 3.3 Die analoge Variable
// Solution by philipprogramm
// 
// Pins
// A0: poti-module (only 1 pin avaliable) 
// Note: A stands for analog pin of the arduino

void setup(){
    pinMode(A0, INPUT); // set potipin as INPUT
    Serial.begin(9600); // begin serial connection with pc
}

void loop(){
    Serial.print("Potistellung: "); // print info to pc
    Serial.print(String(analogRead(A0))); // print actual value of poti
    Serial.print(" | Spannung: "); // print info to pc
    Serial.println(String(5 * analogRead(A0)));
    delay(500); // wait 0,5s with next output
}