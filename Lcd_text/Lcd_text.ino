#include <LiquidCrystal.h>
byte slash[8] = {
  B00000,
  B11000,
  B11000,
  B11111,
  B11111,
  B11000,
  B11000,
  B00000,
  };
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.createChar(7, slash);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.print("Hello, I'm Maj.");
delay(3000);
lcd.clear();

lcd.setCursor(0,0);
lcd.print("N");
delay(10);
lcd.setCursor(1,0);
lcd.print("i");
delay(100);
lcd.setCursor(2,0);
lcd.print("c");
delay(100);
lcd.setCursor(3,0);
lcd.print("e");
delay(100);
lcd.setCursor(4,0);
lcd.print(" ");
delay(100);
lcd.setCursor(5,0);
lcd.print("t");
delay(100);
lcd.setCursor(6,0);
lcd.print("o");
delay(100);
lcd.setCursor(7,0);
lcd.print(" ");
delay(100);
lcd.setCursor(8,0);
lcd.print("m");
delay(100);
lcd.setCursor(9,0);
lcd.print("e");
delay(100);
lcd.setCursor(10,0);
lcd.print("e");
delay(100);
lcd.setCursor(11,0);
lcd.print("t");
delay(100);
lcd.setCursor(12,0);
lcd.print(" ");
delay(100);
lcd.setCursor(13,0);
lcd.print("y");
delay(100);
lcd.setCursor(14,0);
lcd.print("o");
delay(100);
lcd.setCursor(15,0);
lcd.print("u");
delay(100);
lcd.setCursor(16,0);
lcd.print(".");
delay(100);

lcd.clear();

lcd.blink();
delay(4000);

lcd.setCursor(0,0);
lcd.print("A");
delay(10);
lcd.setCursor(1,0);
lcd.print("n");
delay(100);
lcd.setCursor(2,0);
lcd.print("d");
delay(100);
lcd.setCursor(3,0);
lcd.print(" ");
delay(100);
lcd.setCursor(4,0);
lcd.print("h");
delay(100);
lcd.setCursor(5,0);
lcd.print("o");
delay(100);
lcd.setCursor(6,0);
lcd.print("w");
delay(100);
lcd.setCursor(7,0);
lcd.print(" ");
delay(100);
lcd.setCursor(8,0);
lcd.print("a");
delay(100);
lcd.setCursor(9,0);
lcd.print("r");
delay(100);
lcd.setCursor(10,0);
lcd.print("e");
delay(100);
lcd.setCursor(11,0);
lcd.print(" ");
delay(100);
lcd.setCursor(12,0);
lcd.print("y");
delay(100);
lcd.setCursor(13,0);
lcd.print("o");
delay(100);
lcd.setCursor(14,0);
lcd.print("u");
delay(100);
lcd.setCursor(15,0);
lcd.print(" ");
delay(100);
lcd.setCursor(0,1);
lcd.print("t");
delay(100);
lcd.setCursor(1,1);
lcd.print("o");
delay(100);
lcd.setCursor(2,1);
lcd.print("d");
delay(100);
lcd.setCursor(3,1);
lcd.print("a");
delay(100);
lcd.setCursor(4,1);
lcd.print("y");
delay(100);
lcd.setCursor(5,1);
lcd.print("?");
delay(100);

delay(6000);
lcd.clear();

}
