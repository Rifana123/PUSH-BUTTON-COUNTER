#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int buttonPin = 9;
int buttonState = 0;
int lastButtonState = 0;
int counter = 0;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  
  lcd.begin(16, 2);                  
  lcd.print("Count: ");
  lcd.setCursor(9, 0);
  lcd.print(counter);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == LOW) {
        counter++;
        lcd.setCursor(0, 0);
        lcd.print("Count: ");
        lcd.setCursor(9, 0);
        lcd.print("    ");          
        lcd.setCursor(9, 0);
        lcd.print(counter);
      }
    }
  }

  lastButtonState = reading;
}
