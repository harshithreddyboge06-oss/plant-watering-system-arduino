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

---

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

## 🚀 Future Enhancements

* ESP32-based IoT monitoring and control
* Mobile or web dashboard for live data
* Temperature and humidity sensing
* LCD display for real-time moisture levels
* Solar-powered operation

---

## 🏁 Conclusion

This project provided hands-on exposure to **sensor interfacing**, **relay-based switching**, and **automation using Arduino**. It serves as a strong foundation for future projects in embedded systems and IoT.

---

⭐ *Feel free to fork this repository or suggest improvements.*

====================================================

TEXT VERSION (Plain Text Copy)

Automatic Plant Watering System

Author: Harshith Boge
Program: B.Tech – First Year

Project Overview
The Automatic Plant Watering System is an embedded systems project using an Arduino UNO and a soil moisture sensor to automate irrigation. The system monitors soil moisture continuously and activates a water pump only when required, helping conserve water and maintain healthy plant growth.

Objectives

* Automate plant irrigation using soil moisture sensing
* Reduce water wastage through need-based watering
* Gain hands-on experience with Arduino and hardware interfacing

Working Principle
The soil moisture sensor measures soil moisture and sends analog data to the Arduino. The Arduino compares this value with a predefined threshold. If the soil is dry, the relay is activated and the water pump turns ON. If the soil is wet, the relay is deactivated and the pump turns OFF. This cycle runs continuously.

Components Used
Arduino UNO
Soil Moisture Sensor
5V Relay Module
DC Water Pump
External Power Supply
Connecting Wires
Plant (Pothos)

Calibration
Threshold values are selected by observing sensor readings for dry and wet soil conditions and adjusting the value accordingly.

Features
Automatic irrigation system
Prevents over-watering
Simple and cost-effective design
Easy to extend

Results
The pump activates only when soil moisture drops below the threshold, ensuring optimized water usage.

Future Enhancements
IoT integration using ESP32
Mobile or web-based monitoring
Temperature and humidity sensing
LCD display
Solar-powered operation

Conclusion
This project helped develop a practical understanding of Arduino-based automation and serves as a foundation for future embedded systems and IoT projects.

