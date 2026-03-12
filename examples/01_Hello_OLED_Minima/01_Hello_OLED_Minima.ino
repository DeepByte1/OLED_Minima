#include <OLED_Minima.h>

OLED_Minima oled; // by default adress 0x3C


void setup() {
  // Parmeters: (Model, Mirror_X, Mirrir_Y)
  // if the screen is going insane, try changing the first value (model). (0=Original, 1=Copy, 2=Other Copy)
  // also dont forget to use mirror depending on how is screen located!
  oled.begin(0, true, false); 
  oled.DISPLAY_HEIGHT = 64; // screen height (in pixels). by default 64 (8 pages)
  oled.CHAR_SPACING = true; // 1 pixel space between letters. by default true
  
  oled.setCursor(13, 1); // X are pixels lengh. With screen width of 128, its 0-127 (not 1-128!). Y is a page 8 pixels each. with screen size of 64 pages are 0-7.
  oled.println("HELLO!"); // println() will print the data, and then go to the new line.
  oled.print("VAL: "); // print() will simply print the data...
  oled.println(100); // ...allowing to continue from the same place
  oled.println(F("Flash-string")); // supports different types including: strings ("Hello"), characters ('A'), numbers (123), Flash-strings (F("Hello")), and also an empty println() to simply go to the next line.
}

void loop() {}
