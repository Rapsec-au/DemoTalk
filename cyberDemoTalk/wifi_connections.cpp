#include <WiFi.h>
#include "wifi_connection.h"
#include "debug.h"
#include "secrets.h"

void setupWiFi() {
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    debug("Connecting to Wi-Fi");
    while (WiFi.status() != WL_CONNECTED) {
        debug(".");
        delay(300);
    }
    debugln(); 
    debug("Connected with IP: ");
    debugIP(WiFi.localIP()); 
    debugln();
}

