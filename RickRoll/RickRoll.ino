#include "DigiKeyboard.h"
void setup(){}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(21, 8);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("f");
}
