#include <LiquidCrystal.h>

int t = 1;
String spaceempty = "       ";

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0,0);
  while (t<=100) {
    String result = "";
    if (t%3==0) {
      result = result + "Fizz";
    }
    if (t%5==0) {
      result = result + "Buzz";
    }
    if (result=="") {
      lcd.print(t + spaceempty);
    } else {
      lcd.print(result + spaceempty);
    }
    t++;
    delay(1000);
    lcd.setCursor(0,0);
  }
}
