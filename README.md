# 🌱 Automatic Plant Watering System

**Developed by:** Harshith Boge  
*First Year B.Tech Student*

This project demonstrates an automated irrigation solution using an **Arduino UNO** and a **Soil Moisture Sensor**. The system ensures plants receive water only when necessary, promoting water conservation and plant health.

---

## 📌 Objective
To reduce water wastage and automate plant care by monitoring soil moisture levels in real-time and triggering irrigation only when the soil is dry.

---

## ⚙️ Working
The system operates using a feedback loop based on the moisture content of the soil:

- **Monitoring:** The Soil Moisture Sensor sends analog data to the Arduino.
- **Decision Logic:**
  - If **Soil is Dry** (Sensor value > Threshold) → Relay activated → **Pump ON**
  - If **Soil is Wet** (Sensor value < Threshold) → Relay deactivated → **Pump OFF**

```mermaid
graph TD
    Arduino[Arduino UNO]
    Sensor[Soil Moisture Sensor]
    Relay[5V Relay Module]
    Pump[DC Water Pump]
    Bat[9V Battery]
    Plant[Pothos Plant]

    Arduino -- 5V --> Sensor
    Arduino -- 5V --> Relay
    Sensor -- Analog Data --> Arduino
    Arduino -- Digital Signal --> Relay

    Bat -- Power --> Relay
    Relay -- Switched Power --> Pump
    Bat -- Ground --> Pump

    Pump -- Water --> Plant
    Sensor -- Inserted In --> Plant
