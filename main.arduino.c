/*
   Pushbutton Sketch
   Reads the capacitor voltage at digital pin 2 and turns on and off a light-
   emitting diode (LED) connected to digital pin 12.
   17 Nov 2012
   Chapter 1: The Trick Switch
   3by Don Wilcher
 */
// constants won't change; they're used here to
// set pin numbers:
const int buttonPin = 2;
// the number of the pushbutton pin
const int ledPin = 12;
// the number of the LED pin
// variables will change:
int buttonStatus = 0;
// variable for reading the pushbutton status
void setup() {
        // initialize the LED pin as an output:
        pinMode(ledPin, OUTPUT);
        // initialize the pushbutton pin as an input:
        pinMode(buttonPin, INPUT);
}
void loop(){
        // read the status of the pushbutton value:
        buttonStatus = digitalRead(buttonPin);
        // check if the pushbutton is pressed
        // if it is, the buttonEvent is HIGH:
        if (buttonStatus == HIGH) {
                // turn LED on:
                digitalWrite(ledPin, HIGH);
        }
        else {
                // turn LED off:
                digitalWrite(ledPin, LOW);
        }
}
