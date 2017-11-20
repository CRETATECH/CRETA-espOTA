# CRETA-espOTA

## Introduction
This project use esp8266-v7 and nodejs server (express framework) to update firmware using HTTP server.

Here we program ESP8266 using Arduino IDE (ESP with Arduino core). The most importance function is ESPhttpUpdate.update(host, port, route). The last goal is updating outdate firmware OTA automatically.

## Goals
* ESP can connect to server to check firmware update when need.
* Server can support file download.
* Check firmware version using HTTP GET headers.

## Dependency

### ESP8266-v7
* Arduino IDE latest version (v1.8.5 tested).
* ESP8266 board support latest version (v2.3.0 tested).

### Server
* Nodejs latest stable version (v8.9.1 tested).
* Express (npm install --save express).

## Notes
Please check ESP flash carefully and config it right.
