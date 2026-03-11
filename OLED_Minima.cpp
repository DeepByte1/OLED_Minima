#include "OLED_Minima.h"

// ШРИФТЫ (PROGMEM)
const uint8_t char_A[] PROGMEM = {0xFC, 0x22, 0x21, 0x21, 0x21, 0x22, 0xFC, 0x00};
const uint8_t char_B[] PROGMEM = {0xFF, 0x89, 0x89, 0x89, 0x89, 0x89, 0x76, 0x00};
const uint8_t char_C[] PROGMEM = {0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42, 0x00};
const uint8_t char_D[] PROGMEM = {0xFF, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3C, 0x00};
const uint8_t char_E[] PROGMEM = {0xFF, 0x89, 0x89, 0x89, 0x81, 0x81, 0x81, 0x00};
const uint8_t char_F[] PROGMEM = {0xFF, 0x09, 0x09, 0x09, 0x01, 0x01, 0x01, 0x00};
const uint8_t char_G[] PROGMEM = {0x7E, 0x81, 0x81, 0x91, 0x91, 0x91, 0x5E, 0x00};
const uint8_t char_H[] PROGMEM = {0xFF, 0x10, 0x10, 0x10, 0x10, 0x10, 0xFF, 0x00};
const uint8_t char_I[] PROGMEM = {0x81, 0x81, 0xFF, 0xFF, 0x81, 0x81, 0x00, 0x00};
const uint8_t char_J[] PROGMEM = {0x60, 0x80, 0x81, 0x81, 0x7F, 0x01, 0x01, 0x00};
const uint8_t char_K[] PROGMEM = {0xFF, 0x10, 0x28, 0x44, 0x82, 0x81, 0x00, 0x00};
const uint8_t char_L[] PROGMEM = {0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00};
const uint8_t char_M[] PROGMEM = {0xFF, 0x02, 0x0C, 0x02, 0xFF, 0x00, 0x00, 0x00};
const uint8_t char_N[] PROGMEM = {0xFF, 0x06, 0x08, 0x30, 0x40, 0xFF, 0x00, 0x00};
const uint8_t char_O[] PROGMEM = {0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x00};
const uint8_t char_P[] PROGMEM = {0xFF, 0x11, 0x11, 0x11, 0x11, 0x0E, 0x00, 0x00};
const uint8_t char_Q[] PROGMEM = {0x7E, 0x81, 0x81, 0xA1, 0x41, 0xBE, 0x40, 0x00};
const uint8_t char_R[] PROGMEM = {0xFF, 0x11, 0x11, 0x31, 0x51, 0x8E, 0x00, 0x00};
const uint8_t char_S[] PROGMEM = {0x46, 0x89, 0x89, 0x89, 0x89, 0x89, 0x72, 0x00};
const uint8_t char_T[] PROGMEM = {0x01, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00};
const uint8_t char_U[] PROGMEM = {0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x00};
const uint8_t char_V[] PROGMEM = {0x1F, 0x60, 0x80, 0x40, 0x30, 0x0F, 0x00, 0x00};
const uint8_t char_W[] PROGMEM = {0x7F, 0x80, 0x70, 0x80, 0x7F, 0x00, 0x00, 0x00};
const uint8_t char_X[] PROGMEM = {0xC3, 0x24, 0x18, 0x18, 0x24, 0xC3, 0x00, 0x00};
const uint8_t char_Y[] PROGMEM = {0x07, 0x08, 0xF0, 0xF0, 0x08, 0x07, 0x00, 0x00};
const uint8_t char_Z[] PROGMEM = {0x81, 0xC1, 0xA1, 0x91, 0x89, 0x85, 0x83, 0x00};
const uint8_t char_0[] PROGMEM = {0x7E, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 0x00};
const uint8_t char_1[] PROGMEM = {0x00, 0x80, 0x84, 0xFF, 0xFF, 0x80, 0x80, 0x00};
const uint8_t char_2[] PROGMEM = {0x82, 0xC3, 0xA1, 0x91, 0x89, 0x87, 0xC2, 0x00};
const uint8_t char_3[] PROGMEM = {0x42, 0x81, 0x91, 0x91, 0x91, 0xFF, 0x6E, 0x00};
const uint8_t char_4[] PROGMEM = {0x18, 0x14, 0x12, 0x11, 0xFF, 0xFF, 0x10, 0x00};
const uint8_t char_5[] PROGMEM = {0x4F, 0x89, 0x89, 0x89, 0x89, 0x89, 0xF1, 0x00};
const uint8_t char_6[] PROGMEM = {0x7F, 0x89, 0x89, 0x89, 0x89, 0x89, 0x71, 0x00};
const uint8_t char_7[] PROGMEM = {0x01, 0x01, 0x01, 0x01, 0x81, 0x71, 0x0F, 0x00};
const uint8_t char_8[] PROGMEM = {0x76, 0x89, 0x89, 0x89, 0x89, 0x89, 0x76, 0x00};
const uint8_t char_9[] PROGMEM = {0x4E, 0x89, 0x89, 0x89, 0x89, 0x89, 0x7F, 0x00};
const uint8_t char_s1[] PROGMEM = {0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00}; 
const uint8_t char_s2[] PROGMEM = {0x00, 0x00, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00}; 
const uint8_t char_s3[] PROGMEM = {0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00}; 
const uint8_t char_s4[] PROGMEM = {0x00, 0x18, 0x18, 0x7e, 0x7e, 0x18, 0x18, 0x00}; 
const uint8_t blank[] PROGMEM  = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

OLED_Minima::OLED_Minima(uint8_t addr) : _addr(addr) {}

void OLED_Minima::sendCommand(uint8_t cmd) {
  Wire.beginTransmission(_addr);
  Wire.write(0x00);
  Wire.write(cmd);
  Wire.endTransmission();
}

void OLED_Minima::begin(uint8_t Model, bool X_Mirror, bool Y_Mirror) {
  Wire.begin();
  sendCommand(0xAE); 
  sendCommand(0xD5); sendCommand(0x80); 
  sendCommand(0xA8); sendCommand(0x3F); 
  sendCommand(0xD3); sendCommand(0x00); 
  sendCommand(0x40); 
  sendCommand(0x8D); sendCommand(0x14); 
  sendCommand(0x20); sendCommand(0x00); 
  if (X_Mirror) sendCommand(0xA1); else sendCommand(0xA0);
  if (Y_Mirror) sendCommand(0xC8); else sendCommand(0xC0);
  sendCommand(0xDA);
  if (Model == 0) sendCommand(0x12);      // модель 0: оригинал
  else if (Model == 1) sendCommand(0x22); // модель 1: первая версия китайской копии
  else sendCommand(0x02);                 // модель 2: вторая версия китайской копии
  sendCommand(0x81); sendCommand(0xCF); 
  sendCommand(0xAF); 
  clearAll();
}

void OLED_Minima::drawChar8x8(const uint8_t* bitmap, uint8_t col, uint8_t page) {
  sendCommand(0x21); sendCommand(col); sendCommand(col + 7);
  sendCommand(0x22); sendCommand(page); sendCommand(page);
  Wire.beginTransmission(_addr);
  Wire.write(0x40); 
  for (uint8_t i = 0; i < 8; i++) Wire.write(pgm_read_byte(&bitmap[i]));
  Wire.endTransmission();
}

void OLED_Minima::clearAll() {
  sendCommand(0x21); sendCommand(0); sendCommand(127);
  sendCommand(0x22); sendCommand(0); sendCommand(7);
  for (uint16_t i = 0; i < 1024; i++) {
    Wire.beginTransmission(_addr);
    Wire.write(0x40);
    for (uint8_t j = 0; j < 16; j++) { Wire.write(0x00); i++; }
    i--;
    Wire.endTransmission();
  }
  setCursor(0, 0);
}

void OLED_Minima::setCursor(uint8_t x, uint8_t y) {
  cursorX = x; cursorY = y;
}

void OLED_Minima::print(const char* str) { while (*str) printChar(*str++); }

void OLED_Minima::println(const char* str) { print(str); println(); }

void OLED_Minima::print(int num) { char buf[7]; itoa(num, buf, 10); print(buf); }

void OLED_Minima::println(int num) { print(num); println(); }

void OLED_Minima::print(char c) { printChar(c); }

void OLED_Minima::println(char c) { print(c); println(); }

void OLED_Minima::println() { 
  cursorX = 0; cursorY++; 
  if (cursorY > DISPLAY_HEIGHT/8 - 1) cursorY = 0; 
}

void OLED_Minima::print(const __FlashStringHelper *ifsh) {
  PGM_P p = reinterpret_cast<PGM_P>(ifsh);
  while (true) {
    char c = pgm_read_byte(p++);
    if (c == 0) break;
    printChar(c);
  }
}

void OLED_Minima::println(const __FlashStringHelper *ifsh) { print(ifsh); println(); }

void OLED_Minima::printChar(char c) {
  if (c >= 'a' && c <= 'z') c -= 32; 
  const uint8_t* bitmap = 0;

  switch (c) {
    case 'A': bitmap = char_A; break; case 'B': bitmap = char_B; break;
    case 'C': bitmap = char_C; break; case 'D': bitmap = char_D; break;
    case 'E': bitmap = char_E; break; case 'F': bitmap = char_F; break;
    case 'G': bitmap = char_G; break; case 'H': bitmap = char_H; break;
    case 'I': bitmap = char_I; break; case 'J': bitmap = char_J; break;
    case 'K': bitmap = char_K; break; case 'L': bitmap = char_L; break;
    case 'M': bitmap = char_M; break; case 'N': bitmap = char_N; break;
    case 'O': bitmap = char_O; break; case 'P': bitmap = char_P; break;
    case 'Q': bitmap = char_Q; break; case 'R': bitmap = char_R; break;
    case 'S': bitmap = char_S; break; case 'T': bitmap = char_T; break;
    case 'U': bitmap = char_U; break; case 'V': bitmap = char_V; break;
    case 'W': bitmap = char_W; break; case 'X': bitmap = char_X; break;
    case 'Y': bitmap = char_Y; break; case 'Z': bitmap = char_Z; break;
    case '0': bitmap = char_0; break; case '1': bitmap = char_1; break;
    case '2': bitmap = char_2; break; case '3': bitmap = char_3; break;
    case '4': bitmap = char_4; break; case '5': bitmap = char_5; break;
    case '6': bitmap = char_6; break; case '7': bitmap = char_7; break;
    case '8': bitmap = char_8; break; case '9': bitmap = char_9; break;
    case '.': bitmap = char_s1; break; case ':': bitmap = char_s2; break;
    case '-': bitmap = char_s3; break; case '+': bitmap = char_s4; break;
    case ' ': bitmap = blank; break;
  }

  if (bitmap) drawChar8x8(bitmap, cursorX, cursorY);
  else drawChar8x8(blank, cursorX, cursorY);

  cursorX += CHAR_SPACING ? 9 : 8;
  if (cursorX >= 120) println();
}

void OLED_Minima::drawBitmap(const uint8_t* bitmap, uint8_t x, uint8_t y, uint8_t w, uint8_t h) {
  uint8_t h_pages = (h + 7) / 8;
  uint8_t y_page = y / 8;

  sendCommand(0x21); sendCommand(x); sendCommand(x + w - 1); 
  sendCommand(0x22); sendCommand(y_page); sendCommand(y_page + h_pages - 1);

  uint16_t totalBytes = (uint16_t)w * h_pages;
  
  for (uint16_t i = 0; i < totalBytes; i++) {
    if (i % 16 == 0) {
      if (i > 0) Wire.endTransmission();
      Wire.beginTransmission(_addr); 
      Wire.write(0x40); 
    }
    Wire.write(pgm_read_byte(&bitmap[i]));
  }
  Wire.endTransmission();
}
