#include <Arduino.h>

int LED;

void setup_moisture(int led) {
    LED = led;
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop_moisture() {
    int sensorReading = analogRead(A0); //reads the sensor value

    Serial.println("sensor 1:  ------------>"); //prints out the sensor reading
    Serial.println(sensorReading); //prints out the sensor reading

    if (sensorReading > 800) { //if reading is above 800, LED blinks on and off
        digitalWrite(LED, HIGH); //turns the LED on
        delay(500); //waits for a second
        digitalWrite(LED, LOW); //turns the LED off
        delay(500); //waits for a second
    }
}
