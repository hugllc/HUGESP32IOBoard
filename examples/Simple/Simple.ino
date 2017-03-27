/**
 * @file
 * @author     Scott L. Price <prices@hugllc.com>
 * @copyright  © 2017 Hunt Utilities Group, LLC
 * @brief      Simple example of the HUG Nano IO Board Library
 * @details
 */

#include <HUGNanoIOBoard.h>

#define INTERVAL 1000

unsigned long lastRun = 0; ///< This

void setup(void)
{
    pinMode(OUT1, OUTPUT);
    pinMode(IN1, INPUT);
    Serial.begin(115200);
}

void loop(void)
{
    unsigned long thisRun = millis();
    if (thisRun - lastRun >= INTERVAL) {
        // This toggles output OUT1
        digitalWrite(OUT1, !digitalRead(OUT1));
        // This writes the value of the ADC to the serial port
        Serial.println("IN1:  " + analogRead(IN1));
    }
}

