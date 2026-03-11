#ifndef OLED_MINIMA_H
#define OLED_MINIMA_H

#include <Arduino.h>
#include <Wire.h>

class OLED_Minima {
  public:
    OLED_Minima(uint8_t addr = 0x3C);
    
    void begin(uint8_t Model, bool X_Mirror, bool Y_Mirror);
    void clearAll();
    void setCursor(uint8_t x, uint8_t y);
    void sendCommand(uint8_t cmd);
    void drawChar8x8(const uint8_t* bitmap, uint8_t col, uint8_t page);

    void print(const char* str);
    void println(const char* str);
    void print(int num);
    void println(int num);
    void print(char c);
    void println(char c);
    void println();
    void print(const __FlashStringHelper *ifsh);
    void println(const __FlashStringHelper *ifsh);
    void printChar(char c);

    void drawBitmap(const uint8_t* bitmap, uint8_t x, uint8_t y, uint8_t w, uint8_t h);

    bool CHAR_SPACING = true;
    uint8_t DISPLAY_WIDTH = 128;
    uint8_t DISPLAY_HEIGHT = 64;

  private:
    uint8_t _addr;
    uint8_t cursorX = 0;
    uint8_t cursorY = 0;
};

#endif