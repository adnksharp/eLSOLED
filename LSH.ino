#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

#include "web.hpp"
#include "password.hpp"
#include "pp.hpp"

void setup()
{
    Serial.begin(115200);
    DisplayBegin();
    ServerBegin();
    PrintBegin();

}
void loop()
{
    server.handleClient();
}