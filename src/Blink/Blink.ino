/*
  Blink

  Turns an LED on for [onMilliseconds], then off for [offMilliseconds], repeatedly.

  Based on http://www.arduino.cc/en/Tutorial/Blink
*/

const int onMilliseconds = 500;
const int offMilliseconds = 500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(onMilliseconds);             // wait for onMilliseconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(offMilliseconds);            // wait for offMilliseconds
}