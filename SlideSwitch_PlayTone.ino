#include <Adafruit_CircuitPlayground.h>

bool slideSwitch;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  slideSwitch = CircuitPlayground.slideSwitch();
  
  if (slideSwitch) { // if the slide switch is set to ON
    CircuitPlayground.playTone(500, 1000); // play tone
  } else { // if the slide switch is set to OFF
    // do nothing
  }
  
  delay(1000);
}
