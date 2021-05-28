/*
 * https://circuits4you.com
 * ESP32 LED Blink Example
 * Board ESP23 DEVKIT V1
 * 
 * ON Board LED GPIO 2
 */

#define LED 2

void setup()
{
    // Set pin mode
    pinMode(LED, OUTPUT);
}

void loop()
{
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
}
