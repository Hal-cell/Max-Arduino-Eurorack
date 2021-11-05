#include <Adafruit_MCP4728.h>

#include <Adafruit_MCP4728.h>
#include <Wire.h>

Adafruit_MCP4728 mcp;

void setup(void) {
  Serial.begin(115200);
  while(!Serial)
    delay(10);

  Serial.println("Adafruit MCP4728 test!");


  if (!mcp.begin()){
    Serial.println("Failed to find MCP4728 chip");
    while (1) {
        delay(10);
    }
  }
  
}

void loop() {
  for (int i = 0; i <= 4095; i++) {
    mcp.setChannelValue(MCP4728_CHANNEL_A, i);
    mcp.setChannelValue(MCP4728_CHANNEL_B, i);
    mcp.setChannelValue(MCP4728_CHANNEL_C, i);
    mcp.setChannelValue(MCP4728_CHANNEL_D, i);
    delay(5);
  }
}
