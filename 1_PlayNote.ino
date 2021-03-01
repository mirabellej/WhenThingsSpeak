#include <Adafruit_CircuitPlayground.h> // Include the library for the Circuit Playrgound.

void setup() {
    
  CircuitPlayground.begin(); // This initializes the Circuit Playground. 
  delay(1000); // Warm up delay. Pause for 1 second. 
  
  CircuitPlayground.playTone(500, 100); // This plays tone 500 for 100 milliseconds.
  delay(1000); // Silence for one second. 

  // This is a comment. Because it begins with "//" the code will not run. 
  // Try deleting the "//" in the statements below on line 13 and 14 to run the code. 
  // CircuitPlayground.playTone(800, 100); // This plays tone 500 for 100 milliseconds.
  // delay(1000); // Silence for one second. 

}

void loop() {
  // This is the loop. If you put code here, it will run over and over again. 

}
