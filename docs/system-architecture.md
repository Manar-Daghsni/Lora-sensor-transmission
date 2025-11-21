# 🏗️ System Architecture

The project consists of **two main modules**: the Transmitter and the Receiver.

## 🟢 Transmitter
- Arduino Uno reads an analog sensor (potentiometer) on A0  
- Converts sensor value (0–1024) to a smaller range (0–10)  
- Sends data packets using LoRa module (SX1276 868 MHz)  
- Operates continuously with a 50 ms delay between transmissions  

## 🔵 Receiver
- Arduino Uno receives LoRa packets  
- Reads incoming bytes and prints sensor values on the Serial Monitor  
- Measures RSSI for signal strength and quality  
- Can forward data to a central processing unit or storage system  

## 📡 LoRa Communication
- Frequency: 868 MHz  
- LoRa modules handle long-range wireless communication  
- Reliable data transfer for small-sized analog sensor readings
