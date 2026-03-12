# OLED_Minima
Ultra Lightweight Arduino Library (1.7Kb Flash) For Controlling SSD1306 Display, With Everything From Text To Graphics

## Features:
- **Flash:** ~1.7kB (3 times less than Adafruit).
- **RAM:** almost 0 bytes (no buffer).
- **Speed:** Draws characters momentally (8 bytes at once over 1024).
- **Multifunctionality:** Anything from text to graphics!

## Using:
```cpp
#define USE_FONT_8X8 // use this to use 8x8 font, eating extra FLASH memory. comment this if you want to use lightweight 5x8 font.
#include <OLED_Minima.h>
OLED_Minima oled;

void setup() {
  oled.begin(0, false, false); // customizable settings, see more in 01_Hello_OLED_Minima example
  oled.print("HELLO");
  oled.println(123);
  oled.println(F("Yeah, flash strings too!");
}

void loop() {}
```
