#include <LiquidCrystal.h>

int t = 1;
String spaceempty = "       ";

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0,0);
  while (t<=100) { // Replace 100 here if you want it to go up to a different number
    if (t%3==0 && t%5==0) {
      lcd.print("FizzBuzz");
    } else if (t%3==0) {
      lcd.print("Fizz    ");
    } else if (t%5==0) {
      lcd.print("Buzz    ");
    } else {
      lcd.print(t + spaceempty);
    }
    t++;
    delay(1000);
    lcd.setCursor(0,0);
  }
}
