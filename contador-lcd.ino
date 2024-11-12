#include <LiquidCrystal.h> 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); // pinos do LCD - RS E D4 D5 D6 D7

int contador = 0; 
int position = 0; 
int row = 0;

void setup() {
  lcd.begin(16, 2); 
  delay(500); 
}

void loop() {
  lcd.clear(); 
  lcd.setCursor(position, row); 
  lcd.print(contador); 

  contador++;
  position++;

  if (position == 15) { 
    position = 0;
    row = (row == 0) ? 1 : 0;
  }

  delay(1000); 
}
