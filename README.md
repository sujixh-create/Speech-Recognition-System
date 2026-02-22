# 🎤 Speech Recognition System

## 📌 Project Description
This project controls electrical devices using voice commands. 
Voice input is given through a smartphone application, transmitted via Bluetooth, and processed by Arduino to control appliances.

## 🎯 Objective
To develop a voice-controlled system using Arduino and Bluetooth module.

## 🛠 Components Used
- Arduino UNO
- HC-05 Bluetooth Module
- Relay Module / LED
- Smartphone with Voice Control App
- Jumper Wires
- Power Supply

## 🔁 Working Principle
1. User gives voice command in mobile app.
2. App converts voice to text.
3. Command is sent via Bluetooth.
4. Arduino reads command.
5. Device turns ON/OFF accordingly.

Voice → Mobile App → Bluetooth → Arduino → Relay → Appliance

## 💻 Arduino Code
Code available in `arduino_code` folder.

## 🔌 Circuit Connections
- HC-05 TX → Arduino RX
- HC-05 RX → Arduino TX
- Relay IN → Digital Pin 7
- VCC → 5V
- GND → GND

## 🎥 Demo Video
(Add YouTube link here)

## Internship Details
Internship Project - CodeIntern  
Domain: Embedded Systems
