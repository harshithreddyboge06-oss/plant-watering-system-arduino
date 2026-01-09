# 🌱 Automatic Plant Watering System

**Author:** Harshith Boge
**Program:** B.Tech – First Year
**Domain:** Embedded Systems | Automation | IoT Fundamentals

---

## 📘 Project Overview

The **Automatic Plant Watering System** is a beginner-friendly embedded systems project developed using an **Arduino UNO** and a **soil moisture sensor** to automate irrigation. The system continuously monitors soil moisture levels and activates a water pump **only when required**, helping conserve water while maintaining healthy plant growth.

This project was built as a foundational hands-on exercise to understand sensor interfacing, relay control, and real-time decision-making using Arduino.

---

## 🎯 Objectives

* Automate plant irrigation using real-time soil moisture sensing
* Reduce water wastage through need-based watering
* Gain practical experience with Arduino hardware and control logic

---



## ⚙️ Working Principle

The system operates on a **closed-loop feedback mechanism**:

1. The soil moisture sensor measures the moisture content of the soil.
2. The Arduino UNO reads the analog sensor value.
3. The value is compared with a predefined threshold.
4. Based on the comparison:

   * **Dry Soil (value > threshold):** Relay ON → Water Pump ON
   * **Wet Soil (value < threshold):** Relay OFF → Water Pump OFF
5. The process runs continuously to maintain optimal soil moisture.


## 🧠 System Architecture Diagram

graph TD
    Arduino[Arduino UNO]
    Sensor[Soil Moisture Sensor]
    Relay[5V Relay Module]
    Pump[DC Water Pump]
    Bat[External Power Supply]
    Plant[Plant]
    Soil[Soil]

    Arduino -- 5V --> Sensor
    Arduino -- GND --> Sensor
    Sensor -- Analog (A0) --> Arduino

    Arduino -- Digital Control --> Relay
    Arduino -- 5V --> Relay
    Arduino -- GND --> Relay

    Bat -- Power --> Relay
    Relay -- Switched Power --> Pump

    Pump -- Water --> Plant
    Sensor -- Inserted In --> Soil
    Soil -- Moisture Level --> Sensor


## 🧠 Logic Flow

```
Read soil moisture value
        ↓
Compare with threshold
        ↓
Is soil dry?
   ↓            ↓
 Yes            No
 ↓              ↓
Pump ON      Pump OFF
```

---

## 🧩 Components Used

| Component             | Description                       |
| --------------------- | --------------------------------- |
| Arduino UNO           | Microcontroller for control logic |
| Soil Moisture Sensor  | Measures soil moisture            |
| 5V Relay Module       | Controls the water pump           |
| DC Water Pump         | Supplies water                    |
| External Power Supply | Powers the pump                   |
| Jumper Wires          | Circuit connections               |
| Plant (Pothos)        | Testing and demonstration         |

---

## 🔌 Pin Configuration

| Module                        | Arduino Pin |
| ----------------------------- | ----------- |
| Soil Moisture Sensor (Analog) | A0          |
| Relay Control                 | Digital Pin |
| Power                         | 5V          |
| Ground                        | GND         |

---

## 🧪 Calibration

* Sensor readings are observed for completely dry soil and fully wet soil.
* A suitable threshold value is selected between these readings.
* Threshold values may vary depending on soil type and environmental conditions.

---

## 📜 How to Run
1. Clone this repository.
2. Connect the hardware according to the component list above.
3. Open the `.ino` file in the **Arduino IDE**.
4. Select **Arduino UNO** under Tools > Board.
5. Click **Upload** to run the code on your device.

## ✨ Features

* Fully automatic irrigation system
* Prevents over-watering
* Low-cost and beginner-friendly design
* Easy to modify and extend

---

## 📊 Results & Observations

* Pump activates only when soil moisture drops below the threshold.
* Water usage is optimized.
* System responds reliably to changing soil conditions.

---

