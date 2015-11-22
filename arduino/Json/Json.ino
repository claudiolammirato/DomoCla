// Copyright Benoit Blanchon 2014-2015
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson

#include <ArduinoJson.h>
#include <Console.h>



void setup() {
  Bridge.begin();
  Console.begin();

  while (!Console) {
    // wait serial port initialization
  }

  StaticJsonBuffer<200> jsonBuffer;

  char json[] =
      "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";

  JsonObject& root = jsonBuffer.parseObject(json);

  if (!root.success()) {
    Console.println("parseObject() failed");
    return;
  }

  const char* sensor = root["sensor"];
  long time = root["time"];
  double latitude = root["data"][0];
  double longitude = root["data"][1];

  Console.println(sensor);
  Console.println(time);
  Console.println(latitude, 6);
  Console.println(longitude, 6);
  root.printTo(Console);
}

void loop() {
  // not used in this example
}
