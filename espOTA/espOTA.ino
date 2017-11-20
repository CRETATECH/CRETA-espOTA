#include <ESP8266WiFi.h>
#include <ESP8266httpUpdate.h>

const char* ssid = "BLACK";
const char* password = "yoursolution";

const char* host = "192.168.1.8";

uint32_t _start = 0;

void setup()
{
  Serial.begin(115200);
  Serial.println();

  Serial.printf("Connecting to %s ", ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" connected");
  
}

void loop()
{
  if(Serial.available()) {
    Serial.printf("\r\nStart update firmware\r\n");
    t_httpUpdate_return ret = ESPhttpUpdate.update(host, 3000, "/nghia.bin");
    switch(ret) {
    case HTTP_UPDATE_FAILED:
        Serial.println("[update] Update failed.");
        break;
    case HTTP_UPDATE_NO_UPDATES:
        Serial.println("[update] Update no Update.");
        break;
    case HTTP_UPDATE_OK:
        Serial.println("[update] Update ok."); // may not called we reboot the ESP
        break;
    }
    Serial.read();
    // ESP.restart();
  }
  else {
    if((millis() - _start) > 500) {
      Serial.println("Hello Nguyen");
      _start = millis();
    }
    yield();
  }
}
