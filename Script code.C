#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(3000); // wait for system to be ready

  // Open Run (Win + R)
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Open PowerShell
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  // Download image
  DigiKeyboard.print(
    "$p=\"$env:USERPROFILE\\Pictures\\bsod.png\";"
    "Invoke-WebRequest \"https://i.imgur.com/6n6K6Qp.png\" -OutFile $p;"
  );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);

  // Set wallpaper
  DigiKeyboard.print(
    "Add-Type -TypeDefinition 'using System.Runtime.InteropServices;"
    "public class W{[DllImport(\"user32.dll\")]"
    "public static extern bool SystemParametersInfo(int a,int b,string c,int d); }';"
    "[W]::SystemParametersInfo(20,0,$p,3)"
  );
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(1000);
}

void loop() {
  // do nothing (run once)
}
