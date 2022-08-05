#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <Fonts/FreeSans9pt7b.h>
#include "password.hpp"

ESP8266WebServer server(80);
Adafruit_SSD1306 display(128, 64);

void setup()
{
    Serial.begin(115200);
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.setFont(&FreeSans9pt7b);
    Wifi.begin(ssid(), passw());
    while (WiFi.status() != WL_CONNECTED)
        delay(3000);

    wfIP = WiFi.localIP().toString();
}
void loop()
{
}