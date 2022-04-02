#include <Arduino.h>
#include "AnalogSensor.h"

Sense::AnalogSensor sensor {12, 1, false};

void setup() {
  // put your setup code here, to run once:
  sensor.initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
}