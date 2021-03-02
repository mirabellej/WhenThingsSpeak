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

  if (value < dim_level) {
    CircuitPlayground.playTone(500, 1000);
    delay(1000);
  }
}
