/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on NodeMCU.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right NodeMCU module
  in the Tools -> Board menu!

  For advanced settings please follow ESP examples :
   - ESP8266_Standalone_Manual_IP.ino
   - ESP8266_Standalone_SmartConfig.ino
   - ESP8266_Standalone_SSL.ino

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "YourAuthToken";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";


int ledMPin = 1;
int ledSPin = 2;
int ledKPin = 3;
bool buttonMDurum = LOW;
bool buttonSDurum = LOW;
bool buttonKDurum = LOW;
int buttonM = 1;
int buttonS = 2;
int buttonK = 3;


void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  pinMode(ledMPin, OUTPUT);
  pinMode(ledSPin, OUTPUT);
  pinMode(ledKPin, OUTPUT);
  pinMode(buttonM, INPUT);
  pinMode(buttonS, INPUT);
  pinMode(buttonK, INPUT);
}

void loop()
{
  Blynk.run();
}

void joker()
{
  buttonMDurum = digitalRead(buttonM);
  if (buttonMDurum == HIGH)
  {
    digitalWrite(ledMPin , HIGH);
    delay(5000);
    digitalWrite(buttonMDurum , LOW);
    digitalWrite(ledMPin , LOW);
  }
  
  buttonSDurum = digitalRead(buttonS);
  if (buttonSDurum == HIGH)
  {
    digitalWrite(ledSPin , HIGH);
    delay(5000);
    digitalWrite(buttonSDurum , LOW);
    digitalWrite(ledSPin , LOW);
  }
  
  buttonKDurum = digitalRead(buttonK);
  if (buttonKDurum == HIGH)
  {
    digitalWrite(ledKPin , HIGH);
    delay(5000);
    digitalWrite(buttonKDurum , LOW);
    digitalWrite(ledKPin , LOW);
  }
}
