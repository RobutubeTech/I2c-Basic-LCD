/*
 Written By ROBUTUBE TECH
Please Subscribe My Channel
*/



#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("hello everyone");
  lcd.setCursor(0,1);
  lcd.print("Please Subscribe");
}


void loop()
{
}
