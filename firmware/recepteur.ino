#include <LoRa.h>
#include <SPI.h>
String inString ="" ;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);


 while (!Serial);
 Serial.println("LoRa Receiver");
 if(!LoRa.begin(868E6)){
  Serial.println("Starting LoRa failed!");
  while(1);
}}

void loop() {
  // put your main code here, to run repeatedly:
int packetSize= LoRa.parsePacket();
if (packetSize) {
  while (LoRa.available ())
  { 
    int inChar = LoRa.read();
    inString.toInt();
    Serial.println(inChar);
  }
  inString = "";
  LoRa.packetRssi();



}
}
