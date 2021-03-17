#ifndef SZHZIR_LIB_H
#define SZHZIR_LIB_H

#include <Adafruit_NeoPixel.h>
#include <stdint.h>

#define PIN_BUTTON_1 2		//Цифровой пин 2
#define PIN_BUTTON_2 3		//Цифровой пин 3
#define PIN_BUTTON_3 4		//Цифровой пин 4
#define PIN_BUTTON_4 5		//Цифровой пин 5

#define PIN_STRIP_1 9		// Пин для ленты 1 - 9
#define PIN_STRIP_2 10		// Пин для ленты 2 - 10
#define PIN_STRIP_3 11		// Пин для ленты 3 - 11
#define PIN_STRIP_4 12		// Пин для ленты 4 - 12

#define NUMPIXELS 7			// Количество пикселей в ленте на одной стороне

/*----------------------------------------------------------------------------------------*/
/*------------------------------------ПЕРЕМЕННЫЕ------------------------------------------*/
/*----------------------------------------------------------------------------------------*/
static Adafruit_NeoPixel strip_1(NUMPIXELS, PIN_STRIP_1, NEO_GRB + NEO_KHZ800);  // Инициализация ленты 1
static Adafruit_NeoPixel strip_2(NUMPIXELS, PIN_STRIP_2, NEO_GRB + NEO_KHZ800);  // Инициализация ленты 2
static Adafruit_NeoPixel strip_3(NUMPIXELS, PIN_STRIP_3, NEO_GRB + NEO_KHZ800);  // Инициализация ленты 3
static Adafruit_NeoPixel strip_4(NUMPIXELS, PIN_STRIP_4, NEO_GRB + NEO_KHZ800);  // Инициализация ленты 4

/*----------------------------------------------------------------------------------------*/
/*------------------------------------Функции---------------------------------------------*/
/*----------------------------------------------------------------------------------------*/



#endif