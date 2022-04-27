#include <Arduino.h>
#include "SPIFFS.h"
#include "Lib1.h"
#include "Lib2.h"
#include "Lib3.h"

Lib1 l1;
Lib2 l2a;
Lib3 l3;

void setup() {
  // put your setup code here, to run once:
  SPIFFS.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
}