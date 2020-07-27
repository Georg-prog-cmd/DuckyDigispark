#include "DigiKeyboard.h"
void setup(){}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(7, 8);
  DigiKeyboard.sendKeyStroke(8);
  DigiKeyboard.print("https://i.imgflip.com/1dv8ac.jpg");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(100);
  // Opens up window and goes to a image I created xD
  DigiKeyboard.sendKeyStroke(22, 1);
  DigiKeyboard.print("%userprofile%\Desktop\QUACKED");
  DigiKeyboard.sendKeyStroke(40);
  // saving the picture to the user Desktop, pic name QUACKED...
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(7, 8);
  // shows desktop
  DigiKeyboard.sendKeyStroke(21, 8);
  DigiKeyboard.print("%userprofile%\Desktop\QUACKED.png");
  DigiKeyboard.sendKeyStroke(40);
  // opens the png file
  DigiKeyboard.sendKeyStroke(128);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.sendKeyStroke(61, 4);
  // sets the background, and closes.
  DigiKeyboard.sendKeyStroke(7, 8);
  DigiKeyboard.sendKeyStroke(128);
  DigiKeyboard.print("v");
  DigiKeyboard.print("d");
}
