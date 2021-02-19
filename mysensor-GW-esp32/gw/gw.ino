/*
 * The MySensors Arduino library handles the wireless radio link and protocol
 * between your home built sensors/actuators and HA controller of choice.
 * The sensors forms a self healing radio network with optional repeaters. Each
 * repeater and gateway builds a routing tables in EEPROM which keeps track of the
 * network topology allowing messages to be routed to nodes.
 *
 * Created by Henrik Ekblad <henrik.ekblad@mysensors.org>
 * Copyright (C) 2013-2019 Sensnology AB
 * Full contributor list: https://github.com/mysensors/MySensors/graphs/contributors
 *
 * Documentation: http://www.mysensors.org
 * Support Forum: http://forum.mysensors.org
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 *******************************
 *
 * REVISION HISTORY
 * Version 1.0 - tekka
 *
 * DESCRIPTION
 * The ESP32 gateway sends data received from sensors to the WiFi link.
 * The gateway also accepts input on ethernet interface, which is then sent out to the radio network.
 * https://github.com/mysensors/MySensors/blob/development/hal/architecture/ESP32/MyHwESP32.h
 * https://github.com/espressif/arduino-esp32/blob/master/variants/feather_esp32/pins_arduino.h
 * https://forums.adafruit.com/viewtopic.php?f=24&t=140279
 * https://www.mysensors.org/build/connect_radio
 * Make sure to fill in your ssid and WiFi password below.
 * | IO            | RF24 |
 * |-------------|---------|
 * | MOSI       | 18      |
 * | MISO       | 19      |
 * | SCK        | 5        |
 * | CSN(SS) | 33      |
 * | CE          | 15      |
 */
// tools > board > esp32 arduino > Adafruit esp32 feather
// Enable debug prints to serial monitor
#define MY_DEBUG

// Enables and select radio type (if attached)
#define MY_RADIO_RF24
#define MY_RF24_CE_PIN 15

#define MY_GATEWAY_MQTT_CLIENT
#define MY_GATEWAY_ESP32

// Set this node's subscribe and publish topic prefix
#define MY_MQTT_PUBLISH_TOPIC_PREFIX "sofia-gateway1-out"
#define MY_MQTT_SUBSCRIBE_TOPIC_PREFIX "sofia-gateway1-in"

// Set MQTT client id
#define MY_MQTT_CLIENT_ID "mysensors-1"

// Enable these if your MQTT broker requires usenrame/password
//#define MY_MQTT_USER "username"
//#define MY_MQTT_PASSWORD "password"

// Set WIFI SSID and password
#include "config.h"

// Set the hostname for the WiFi Client. This is the hostname
// passed to the DHCP server if not static.
#define MY_HOSTNAME "ESP32_MQTT_GW"

// Enable MY_IP_ADDRESS here if you want a static ip address (no DHCP)
//#define MY_IP_ADDRESS 192,168,178,87

// If using static ip you can define Gateway and Subnet address as well
//#define MY_IP_GATEWAY_ADDRESS 192,168,178,1
//#define MY_IP_SUBNET_ADDRESS 255,255,255,0

// MQTT broker ip address.
#define MY_CONTROLLER_IP_ADDRESS 10,100,101,81

// The MQTT broker port to to open
#define MY_PORT 1883

#include <MySensors.h>

void setup()
{
  // Setup locally attached sensors
}

void presentation()
{
  // Present locally attached sensors here
}

void loop()
{
  // Send locally attech sensors data here
}
