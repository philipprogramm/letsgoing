// 3.6 Zuordnen und Einschränken
// Solution by philipprogramm
// 
// Pins
// A0: poti-module (pin 1)
// Note: A stands for analog in-/output
int potiWert = 0; // initialise potiWert variable as integer var

void setup(){
    pinMode(A0, INPUT); // set A0 as an input for the poti-module
}

void loop(){
    potiWert = constrain(analogRead(A0), 312, 712); // constrain from 312 to 712
    Serial.print("Poti-Wert(vor Umrechnung): "); // print info
    Serial.print(analogRead(A0)); // print raw data
    Serial.print(" |Poti-Wert (nach Umrechnung): "); // print info
    Serial.print(potiWert); // print constrained value
    Serial.print(" |Prozent: "); // print info
    Serial.print(map(potiWert, 312, 712, 0, 100)); // print percentage (map to 0->100 and print after it)
    Serial.println("%"); // new line
    delay(500); // wait 0,5s before next loop
}