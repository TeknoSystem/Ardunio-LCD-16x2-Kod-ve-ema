#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 11, 5, 4, 3, 2);

void setup() {
 lcd.begin(16, 2);
 lcd.setCursor(1,0);
 lcd.print("Metin");
 lcd.setCursor(1,1);
lcd.print("Metin");
}

void loop() { }
