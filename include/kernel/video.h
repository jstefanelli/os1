#ifndef __JPS_VIDEO_H
#define __JPS_VIDEO_H
#define COLOR_WHITE_BLACK 0x0F

#include "main.h"

extern char * videoMem;

void printCharacterAtPos(char c, char color, int x, int y);

void clearScreen();

void printTab();

void newLine();

void deleteCurrentChar();

void printString(char * s);

void printCharacter(char chr);

void updateCursorPos();

void loadVideoPort();

void printUint32(uint32_t val);

#endif