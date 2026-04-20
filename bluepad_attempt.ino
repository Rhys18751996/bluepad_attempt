#include "src/GamepadManager.h"

void setup() {
    Serial.begin(115200);
    Serial.println("Bluepad32 C++ refactor");

    GamepadManager::setup();
}

void loop() {
    GamepadManager::update();
    delay(100);
}