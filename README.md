# OLED_Minima
Ultra Lightweight Arduino Library (1.7Kb Flash) For Controlling SSD1306 Display, With Everything From Text To Graphics

## Features:
- **Flash:** ~1.7kB (3 times less than Adafruit).
- **RAM:** almost 0 bytes (no buffer).
- **Speed:** Draws characters momentally (8 bytes at once over 1024).

## Using:
```cpp
#include <OLED_Minima.h>
OLED_Minima oled;

void setup() {
  oled.begin(0, false, false);
  oled.print("HELLO");
  oled.println(123);
}

void loop() {}
```
