#include <Arduino.h>

extern void setup_moisture(int led);
extern void loop_moisture();

extern void setup_screen();
extern void loop_screen();

void setup() {
    setup_moisture(LED_BUILTIN);
    setup_screen();
}
void loop() {
    loop_moisture();
    loop_screen();
}
