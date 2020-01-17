// 3.5 Die Pulsweitenmodulation
// Solution by philipprogramm
// 
// Pins
// 6: rgb-module pin 1 (blue)
// 5: rgb-module pin 2 (red)
// 3: rgb-module pin 3 (green)
// Note: PWM is only avaliable on Pins with the ~ symbol.
// Side-Info: PWM stands for Pulsweitenmodulation

void setup(){
    pinMode(6, OUTPUT); // set pins of rgb-module as outputs
    pinMode(5, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop(){
    analogWrite(6, 125); // set the brightness of pin 6 to 125 (range: 0-255)
    analogWrite(5, 255);
    analogWrite(3, 50);
    delay(1000);         // wait 1s
    analogWrite(6, 255); // next color
    analogWrite(5, 50);
    analogWrite(3, 125);
    delay(1000);         // wait 1s
    analogWrite(6, 122); // next color
    analogWrite(5, 0);
    analogWrite(3, 255);
    delay(2000); // wait 2s before next loop
}