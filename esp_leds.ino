#include "Config.h"
#include "WIFI.h"
#include "Server.h"
#include "leds.h"


void setup(void){
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  for(int i=0; i< 3; i++) {
    digitalWrite(led, !digitalRead(led));
    delay(500);
  }
  leds_init();
  WIFI_init(false);
  server_init();;
  
}

void loop(void){
  server.handleClient();                   
}
