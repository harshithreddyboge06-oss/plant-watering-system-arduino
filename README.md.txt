# 🌱 Automatic Plant Watering System

**Developed by:** Harshith Boge  
*First Year B.Tech Student*

This project demonstrates an automated irrigation solution using an **Arduino UNO** and a **Soil Moisture Sensor**. The system ensures plants receive water only when necessary, promoting water conservation and plant health.

---

## 📌 Objective
To reduce water wastage and automate plant care by monitoring soil moisture levels in real-time and triggering irrigation only when the soil is dry.

## ⚙️ Working
The system operates using a feedback loop based on the moisture content of the soil:
* **Monitoring:** The Soil Moisture Sensor sends analog data to the Arduino.
* **Logic:** * If **Soil is Dry** (Sensor value > Threshold) → Arduino triggers the Relay → **Pump ON**.
    * If **Soil is Wet** (Sensor value < Threshold) → Arduino deactivates the Relay → **Pump OFF**.

```mermaid
graph TD
    %% Nodes
    Arduino[Arduino UNO]
    Sensor[Soil Moisture Sensor]
    Relay[5V Relay Module]
    Pump[DC Water Pump]
    Bat[9V Battery]
    Plant[Pothos Plant]

    %% Power Connections
    Arduino -- 5V --> Sensor
    Arduino -- 5V --> Relay
    Bat -- Positive --> Relay
    
    %% Signal Connections
    Sensor -- Analog Data --> Arduino
    Arduino -- Digital Signal --> Relay
    
    %% High Power Circuit
    Relay -- Switched Power --> Pump
    Bat -- Negative --> Pump
    
    %% Physical Actions
    Pump -- Water Tubing --> Plant
    Sensor -- Inserted In --> Plant

---

## 📸 Hardware Setup
![Project Setup](setup_frontview.jpeg)

## 🔧 Components Used
| Component | Purpose |
| :--- | :--- |
| **Arduino UNO** | The main microcontroller to process sensor data and control the relay. |
| **Soil Moisture Sensor** | Measures the volumetric water content in the soil. |
| **5V Relay Module** | Acts as an electrically operated switch to safely control the pump. |
| **DC Water Pump** | Submersible pump used to deliver water to the plant. |
| **9V Battery** | External power source for the water pump. |
| **Jumper Wires** | For connecting the various electronic modules. |

---

## 🛠 Tools & Technologies
* **Language:** Embedded C / C++
* **IDE:** Arduino IDE
* **Hardware Platform:** Arduino (Atmega328P)

## 🌍 Applications
* **Smart Home Gardens:** Automated care for indoor plants.
* **Smart Agriculture:** Scalable logic for greenhouse irrigation.
* **Conservation:** Optimized water usage in drought-prone areas.

---

## 📜 How to Run
1. Clone this repository.
2. Connect the hardware according to the component list above.
3. Open the `.ino` file in the **Arduino IDE**.
4. Select **Arduino UNO** under Tools > Board.
5. Click **Upload** to run the code on your device.