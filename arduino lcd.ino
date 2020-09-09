#include <LiquidCrystal.h>

unsigned int t;
String spaceempty = "       ";

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  t=1+millis()/200;
  lcd.setCursor(0,0);
  if (t%3==0 && t%5==0) {
    lcd.print("FizzBuzz");
  } else if (t%3==0) {
    lcd.print("Fizz    ");
  } else if (t%5==0) {
    lcd.print("Buzz    ");
  } else {
    lcd.print(t + spaceempty);
  }
}
