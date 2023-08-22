#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.init();

  lcd.backlight();
  lcd.setCursor(4,0);
  lcd.print("kitten");
  lcd.setCursor(6,1);
  lcd.print("meaw");

}

void loop() {
  // put your main code here, to run repeatedly:

}
