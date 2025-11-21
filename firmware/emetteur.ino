#include <LoRa.h>
#include <SPI.h>
int pot= A0;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(pot,INPUT);

 while (!Serial);
 Serial.println("LoRa Sender");
 if(!LoRa.begin(868E6)){
  Serial.println("Starting LoRa failed!");
  while(1);
 }
}

void loop() {
  // put your main code here, to run repeatedly:
 int val=map(analogRead (pot),0,1024,0,10);
 LoRa.beginPacket();
 LoRa.print(val);
 LoRa.endPacket();
 delay(50);
}
