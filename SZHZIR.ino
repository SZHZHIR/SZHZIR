#include "szhzir_lib.h"
//#include <Adafruit_NeoPixel.h>

uint16_t a = 0;
uint16_t b = 0;

void setup() 
{
	pinMode(PIN_BUTTON_1,INPUT);
	pinMode(PIN_BUTTON_2,INPUT);

	attachInterrupt(0,handler_button_1,RISING);		//Объявление обработчика прерываний для кнопки 1
	attachInterrupt(1,handler_button_2,RISING);		//Объявление обработчика прерываний для кнопки 1

	strip_1.begin();  // ???
	strip_2.begin();  // ???
	strip_3.begin();  // ???
	strip_4.begin();  // ???

	Serial.begin(9600);
}

/**
 * @brief Обработчик прерывания
 * Обработка прерывания для переключения режимов ленты
 */
void handler_button_1 ()
{
	for(int i = 0; i<NUMPIXELS; i++)
    {
      strip_1.setPixelColor(i,100,0,0);
    }
}

/**
 * @brief Обработчик прерывания
 * Обработка прерывания для переключения подрежимов ленты
 */
void handler_button_2 ()
{
	for(int i = 0; i<NUMPIXELS; i++)
    {
      strip_2.setPixelColor(i,0,100,0);
    }
}

void loop() 
{
	strip_1.show();
  	strip_2.show();
	delay(11);
}
