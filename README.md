# 🌱 Smart Precision Irrigation & Crop Health Monitoring System

An Arduino-based smart irrigation system that automatically controls water supply based on soil moisture and monitors environmental conditions to improve crop yield and conserve water.

---

## 📌 Problem Statement
Traditional irrigation methods waste large amounts of water and do not consider real-time soil and climate conditions, leading to poor crop health and reduced yield.

---

## 💡 Solution
This system monitors soil moisture, temperature, and humidity in real time and automatically activates irrigation only when required, ensuring efficient water usage.

---

## 🚀 Features
- Soil moisture-based irrigation control
- Automatic water pump operation
- Temperature and humidity monitoring
- LCD display for real-time status
- Low-cost and energy-efficient
- Scalable for smart agriculture

---

## 🧠 System Working
1. Soil moisture sensor measures soil condition
2. If soil is dry → water pump turns ON
3. If soil is wet → water pump turns OFF
4. Temperature and humidity are continuously monitored
5. System displays live data on LCD

---

## 🔧 Hardware Components
- Arduino UNO
- Soil Moisture Sensor
- DHT11 Temperature & Humidity Sensor
- Relay Module
- Water Pump (or LED for demo)
- LCD Display (I2C)
- Power Supply

---

## 🔌 Pin Connections

| Component | Arduino Pin |
|--------|-------------|
| Soil Moisture Sensor | A0 |
| DHT11 | D2 |
| Relay | D8 |
| LCD SDA | SDA |
| LCD SCL | SCL |

---

## 📦 Software Requirements
- Arduino IDE
- LiquidCrystal_I2C library
- DHT Sensor library
- Adafruit Unified Sensor library

---

## 🛠️ How to Run
1. Connect components as per pin connections
2. Install required libraries
3. Upload the code to Arduino
4. Insert soil sensor into soil
5. Observe automatic pump control

---

## 🧪 Hackathon Demo Guide
- Dry soil → Pump ON
- Wet soil → Pump OFF
- Show temperature & humidity live on LCD

---

## 📈 Future Enhancements
- IoT-based mobile app monitoring
- Weather-based irrigation prediction
- Solar-powered system
- AI-based crop disease detection

---

## 🏆 Applications
- Smart agriculture
- Precision farming
- Greenhouses
- Water conservation systems

---

## 📄 License
This project is open-source and free to use for educational and hackathon purposes.
# SMART-PRECISION-IRRIGATION-SYSTEM
