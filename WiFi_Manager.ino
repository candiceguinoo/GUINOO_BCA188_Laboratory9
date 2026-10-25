
#include <WiFi.h>
#include <WiFiManager.h>

const char* AP_NAME = "BCA188-ESP32-2024-2155";

const unsigned long RESET_HOLD_TIME = 3000;

WiFiManager wm;

void checkBootButton() {
  if (digitalRead(BOOT_PIN) == LOW) {
    unsigned long startTime = millis();

    while (digitalRead(BOOT_PIN) == LOW) {
      if (millis() - startTime >= RESET_HOLD_TIME) {
        Serial.println("BOOT held for 3 seconds.");
        Serial.println("Clearing saved Wi-Fi settings...");

        wm.resetSettings();
        delay(500);
        ESP.restart();
      }

      delay(10);
    }
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(BOOT_PIN, INPUT_PULLUP);

  WiFi.mode(WIFI_STA);
  wm.setConfigPortalTimeout(180);

  if (!wm.autoConnect(AP_NAME)) {
    Serial.println("Connection failed");
    delay(3000);
    ESP.restart();
  }

  Serial.println("Connected!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  checkBootButton();
}
