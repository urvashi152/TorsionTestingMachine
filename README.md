# Torsion Testing Machine – Arduino-Based Project

## Overview

This project is a low-cost, Arduino-controlled **Torsion Testing Machine** designed to evaluate the **torsional behavior of materials**. It is ideal for academic and small-lab applications. Using a **stepper motor** to apply torque and a **load cell with HX711** to measure the force, the system provides digital, real-time feedback and basic automation for material testing.

---

## Objectives

- Build a **compact, budget-friendly torsion testing rig**.
- Apply **precise angular displacement** via a stepper motor.
- Measure **torque** through a load cell and HX711 amplifier.
- Observe and record **material deformation behavior**.
- Automate **data acquisition** using Arduino and serial output.

---

## Hardware Components

| Component           | Description                         |
|--------------------|-------------------------------------|
| Arduino UNO         | Microcontroller                     |
| TB6600 Driver       | Stepper motor driver                |
| Stepper Motor       | NEMA 17 or NEMA 23 (1.8°/step)      |
| HX711 Module        | Load cell amplifier                 |
| Load Cell           | 5 Kg / 10 Kg / 20 Kg                |
| Power Supply        | For stepper and Arduino             |
| Breadboard & Wires  | Prototyping and connections         |

---

## Features

- **Stepper Motor Control:** Rotates the specimen under torsion using TB6600 driver.
- **Force Measurement:** Reads torque via load cell and HX711.
- **Data Processing:** Real-time readings with basic noise filtering.
- **Auto Stop:** Stops after a set number of steps or if failure is detected.
- **Serial Output:** Torque data is printed to Serial Monitor for logging or graphing.

---

## Torque Calculation

Torque is calculated using: Torque = Force × Arm Length

Where:
- `Force` is read from the load cell (in Newtons or Kg-force)
- `Arm Length` is the lever arm from the center of twist (in meters)

---


