/**
 * @file
 * @author     Scott L. Price <prices@hugllc.com>
 * @copyright  © 2017 Hunt Utilities Group, LLC
 * @brief   The main file for the fence cutting machine firmware.
 * @details
 */

#ifndef HUGESP32IOBOARD_H_
#define HUGESP32IOBOARD_H_

#include <Arduino.h>
#include <stdint.h>

#define OUTPUT_PORTS 8
#define INPUT_PORTS 8

static const uint8_t IN1 = 26;
static const uint8_t IN2 = 25;
static const uint8_t IN3 = 33;
static const uint8_t IN4 = 32;
static const uint8_t IN5 = 36;
static const uint8_t IN6 = 39;
static const uint8_t IN7 = 34;
static const uint8_t IN8 = 35;

static const uint8_t SW1 = 5;
static const uint8_t SW2 = 18;

static const uint8_t OUT1 = 10;
static const uint8_t OUT2 = 9;
static const uint8_t OUT3 = 6;
static const uint8_t OUT4 = 11;
static const uint8_t OUT5 = 7;
static const uint8_t OUT6 = 8;
static const uint8_t OUT7 = 16;
static const uint8_t OUT8 = 17;

static const uint8_t SPEAKER = 19;

static const uint8_t VIN1 = 12;
static const uint8_t VIN2 = 14;
static const uint8_t VIN3 = 27;
static const uint8_t VIN4 = 13;
static const uint8_t VIN5 = 15;
static const uint8_t VIN6 = 2;
static const uint8_t VIN7 = 4;
static const uint8_t VIN8 = IN6;

static const uint8_t VSENSE = IN3;

/**
 * This is a mapping of which Voltage read port goes to which OUT Port
 */
static const uint8_t VIN[] {
    [0] = VIN1,
    [1] = VIN2,
    [2] = VIN3,
    [3] = VIN4,
    [4] = VIN5,
    [5] = VIN6,
    [6] = VIN7,
    [7] = VIN8,
}

/** 
 * @brief This reads the voltage on one of the output ports
 * 
 * @param port The port to use
 * 
 * @return The ADC read of the voltage on the port
 */
static inline uint16_t voltageRead(uint8_t port)
{
    if (port < OUTPUT_PORTS) {
        return analogRead(VIN[port]);
    }
    return 0;
}
/** 
 * @brief This reads the voltage on the +V Pins
 * 
 * @return The ADC read of the voltage on the port
 */
static inline uint16_t voltageRead(void)
{
    if (port < OUTPUT_PORTS) {
        return analogRead(VSENSE);
    }
    return 0;
}


#endif   //HUGESP32IOBOARD_H_
