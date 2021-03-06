#ifndef PIN_DEFINES_H
#define PIN_DEFINES_H

#include "mbed.h"

//LED
#define STATUS_LED PTC5

//Valves
#define SUPPLY_V PTD4
#define PURGE_V PTC3
#define EXTRA_V PTC4

//relays
#define CAP_R PTC6
#define CHARGE_R PTC7
#define FCC_R PTD5
#define START_R PTD6
#define MOTOR_R PTC1

//analog voltage readings
#define CAPVOLT PTD1
#define FCCURR PTC0
#define FCVOLT PTB0
#define CAPCURR PTB1
#define FCPRES PTC11//A11 is not defined for some reason will have to tie it to A19 which is near by

//Multiplexor pins
#define MULTO2 PTD0
#define MULTA PTA12
#define MULTB PTA13
#define MULTO1 PTD7

//Serial
//data link
#define LINK_RX PTB16//Rx0
#define LINK_TX PTB17//Tx0
//open log
#define OL_RX PTD2//RX2
#define OL_TX PTD3//TX2

//I2C
#define I2C_SDA PTB3
#define I2C_SCL PTB2

#endif
