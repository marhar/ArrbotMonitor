#include "ArrbotMonitor.h"
#include <math.h>

void setup() {
  Serial.begin(9600);
}

// Uncomment the following line to disable monitor output
// #define NO_MONITOR_OUTPUT

float scale = 10.0;
float x = 0.0;
void loop() {
  x += .01;
  float s = sin(x) * scale;
  float really_long_name = cos(x) * scale;

  DISPLAY(scale);
  MONITOR(s);
  MONITOR2("cos", really_long_name);
  MONITOR_ENDL();
}
