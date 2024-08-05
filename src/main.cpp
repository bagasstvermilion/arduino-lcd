#include <Wire.h>
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

const int col = 16;
const int row = 2;
LiquidCrystal_I2C lcd(0x27, col, row);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  static int position = 0;

  lcd.clear();
  lcd.setCursor(position, 1);
  lcd.print("Misono Mika");
  lcd.setCursor(position, 2);
  lcd.print("Ayang Gweee");
  
  delay(300);

  position++;

  if (position > col - 7) {
    position = 0;
  }
}

// #include <Wire.h>
// #include <Arduino.h>
// #include <LiquidCrystal_I2C.h>

// const int col = 16;
// const int row = 2;
// LiquidCrystal_I2C lcd(0x27, col, row);

// const int TEXT_LENGTH = 7;
// int position = 0;
// bool movingLeft = true;

// void setup() {
//   lcd.init();
//   lcd.backlight();
// }

// void loop() {
//   lcd.clear();
//   lcd.setCursor(position, 1);
//   lcd.print("Misono Mika");
//   lcd.setCursor(position, 2);
//   lcd.print("Ayang Gweee");
  
//   delay(300);

//   if (movingLeft) {
//     position--;
//     if (position < -TEXT_LENGTH) { // Menggunakan panjang teks 7 karakter
//       movingLeft = false;
//     }
//   } else {
//     position++;
//     if (position > col) {
//       movingLeft = true;
//     }
//   }
// }
