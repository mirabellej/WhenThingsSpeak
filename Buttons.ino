#include <Adafruit_CircuitPlayground.h>

bool leftButtonPressed;
bool rightButtonPressed;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  // This assigns a variable to a function that checkes to see if the button is pressed
  leftButtonPressed = CircuitPlayground.leftButton();
  rightButtonPressed = CircuitPlayground.rightButton();
  
  if (leftButtonPressed) {
    CircuitPlayground.playTone(500, 100); // This plays tone 500 for 100 milliseconds.
  } else {
    // CircuitPlayground.playTone(0, 100); // This plays tone 0 for 100 milliseconds.
  }


  if (rightButtonPressed) {
    // Put your code here and delete the "//"
  } else {
    // Put your code here and delete the "//"
  }
  
  delay(100);
}
