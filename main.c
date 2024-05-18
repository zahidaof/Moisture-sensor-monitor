#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

double moisture[10];
int prevs = 0;

void setup() {
    lcd.begin(16, 2);
    // Print a message to the LCD.
    lcd.setCursor(0,0);
    lcd.print(" Soil Moisture ");
    pinMode(A1, INPUT);
    pinMode(12, OUTPUT); 
}

void setup() {
  pinMode(analogRead(A0), INPUT);
}

void loop() {
  int moisture = analogRead(A0);
  if (moisture < 100) {
    // soil is dry
    digitalWrite(6, HIGH); // Apply power to the soil moisture sensor
    delay(10);             // Wait for the sensor to read the condition
    digitalWrite(6, LOW);  // Turn off power to reduce metal corrosion

    // if (moisture < 872) {
      digitalWrite(12, HIGH);   // Turn on sound alarm
      delay(1200);              // Send info for sound duration...
      digitalWrite(12, LOW);
      delay(1200);              // Stop sound...
      tone(12, 1500);
      delay(250);
      noTone(12);
      tone(12, 1500);
      delay(250);
      noTone(12);
    }
}
