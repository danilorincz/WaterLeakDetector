#include <WiFi.h>
#include <WiFiUDP.h>
#include <ESPAsyncWebServer.h>
#include <AsyncElegantOTA.h>
#include <ArduinoJson.h>
#include <Preferences.h>

#include "webpage.h"

#include "C:\customLibraries\cronos\cronos.h"
#include "C:\customLibraries\timer\timer.h"

#include "webInterface.h"
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    AsyncElegantOTA.loop();
}