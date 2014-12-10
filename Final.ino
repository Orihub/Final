const int transistorPin = 9; // connected to the base of the transistor

void setup() {
// set the transistor pin as output:
pinMode(transistorPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
// read the potentiometer:
int sensorValue = analogRead(A1);

// map the motor
int outputValue = map(sensorValue, 0, 1023, 0, 255);
// use that to control the transistor:
analogWrite(transistorPin, outputValue);
Serial.println(outputValue);

//map the speaker
int speaker = map(sensorValue, 0,1023, 120, 1500);
tone (10, speaker, 10);
delay(1);

}
