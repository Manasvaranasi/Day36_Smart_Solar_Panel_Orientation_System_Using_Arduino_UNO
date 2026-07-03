# 🌞 Smart Solar Panel Orientation System

## 📌 Project Description

The Smart Solar Panel Orientation System is an Arduino UNO based embedded project that automatically adjusts the angle of a solar panel to face the direction of maximum sunlight.

The system uses two Light Dependent Resistors (LDRs) placed on opposite sides of the solar panel to detect sunlight intensity. Based on the difference in light intensity, a Servo Motor rotates the solar panel toward the brighter side, maximizing solar energy generation throughout the day.

This project demonstrates an automatic solar tracking mechanism that improves solar panel efficiency and reduces the need for manual adjustment.

---

# 🚀 Features

- Automatic Solar Tracking
- Dual LDR Light Detection
- Real-Time Servo Motor Control
- Maximum Sunlight Alignment
- Renewable Energy Automation
- Low-Cost Embedded Solution
- Serial Monitor Data Logging

---

# 🛠 Components Used

- Arduino UNO
- 2 × Photoresistors (LDRs)
- Servo Motor (SG90)
- 2 × 10kΩ Resistors
- Breadboard
- Jumper Wires

---

# 🔌 Circuit Connections

## Left LDR

| Component | Arduino |
|-----------|----------|
| Terminal 1 | 5V |
| Terminal 2 | A0 |
| Terminal 2 | 10kΩ → GND |

---

## Right LDR

| Component | Arduino |
|-----------|----------|
| Terminal 1 | 5V |
| Terminal 2 | A1 |
| Terminal 2 | 10kΩ → GND |

---

## Servo Motor

| Servo Wire | Arduino |
|------------|----------|
| Red (VCC) | 5V |
| Brown/Black (GND) | GND |
| Orange/Yellow (Signal) | D9 |

---

# ⚙️ Working Principle

The two LDR sensors continuously measure the sunlight intensity on the left and right sides of the solar panel.

The Arduino compares both sensor values.

- If the left LDR receives more sunlight, the servo rotates the panel toward the left.
- If the right LDR receives more sunlight, the servo rotates the panel toward the right.
- If both LDRs receive nearly equal sunlight, the servo stops moving and keeps the panel aligned with the sun.

This ensures that the solar panel always faces the direction of maximum sunlight for improved energy generation.

---

# ☀️ System Operation

### ⬅️ Left LDR Receives More Light

**Condition**

- Left LDR > Right LDR

**Action**

- Servo rotates toward the left
- Solar panel follows the brighter light source

---

### ➡️ Right LDR Receives More Light

**Condition**

- Right LDR > Left LDR

**Action**

- Servo rotates toward the right
- Solar panel follows the brighter light source

---

### 🌞 Equal Light on Both LDRs

**Condition**

- Light difference is within the threshold

**Action**

- Servo remains stationary
- Solar panel stays aligned

---

# 🖥️ Serial Monitor Output

The Serial Monitor continuously displays:

- Left LDR Value
- Right LDR Value
- Servo Direction
- Servo Angle

### Example Output

```text
Left LDR : 842
Right LDR : 415
Status : ROTATING LEFT
Servo Angle : 68°
```

```text
Left LDR : 395
Right LDR : 856
Status : ROTATING RIGHT
Servo Angle : 118°
```

```text
Left LDR : 705
Right LDR : 710
Status : PANEL ALIGNED
Servo Angle : 90°
```

---

# 🌍 Applications

- Solar Power Plants
- Agri-Voltaic Farming
- Smart Irrigation Systems
- Rooftop Solar Installations
- Solar Street Lighting
- Renewable Energy Projects
- Automatic Solar Tracking Systems
- Smart Agriculture

---

# 📚 Learning Outcomes

- Arduino Programming
- LDR Sensor Interfacing
- Servo Motor Control
- Analog Sensor Processing
- Automatic Tracking Algorithms
- Renewable Energy Applications
- Embedded Systems Design
- Sensor-Based Automation

---

# 🔮 Future Enhancements

- ESP32 IoT Integration
- Dual-Axis Solar Tracking
- Weather Monitoring
- Cloud-Based Performance Logging
- Mobile App Monitoring
- Solar Power Output Measurement
- AI-Based Sun Position Prediction
- Battery Charging Optimization
- Remote Monitoring Dashboard

---

# 👨‍💻 Author

**MANAS VARANASI**

### 🚀 Day 36 of 45 Days Embedded Systems & Electronics Challenge

### 🌞 Project: Smart Solar Panel Orientation System

Building One Project Every Day To Strengthen My Embedded Systems, IoT, Automation, Renewable Energy, and Smart Agriculture Skills.