#include <Adafruit_CircuitPlayground.h>

int value;
int dim_level = 50;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  value = CircuitPlayground.lightSensor();

  Serial.print("Light Sensor: ");
  Serial.println(value);

// The tone will play as long as the light level is dim
  while (value < dim_level) {
    CircuitPlayground.playTone(500, 1000);
    value = CircuitPlayground.lightSensor();
  }
}
