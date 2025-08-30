# Arduino Voltage and Current Monitor with Relay

This project is a solar cell monitoring device. It measures the current and voltage of the solar panel and the consumer using a current sensor and a resistive divider circuit. The maximum and minimum voltage and current are set using a variable resistor. If the voltage and current decrease or increase, the intermediate device disconnects the connection between the solar cell and the consumer using a relay so that the consumer is not damaged.

---

## Features
- Display real-time voltage and current on a 16x2 LCD
- User-defined upper and lower limits for voltage and current
- Relay control based on measured values
- Reads values from analog pins A0–A5
- Supports ACS current sensor

---

## Hardware Requirements
- Arduino Uno (or compatible board)
- 16x2 LCD (LiquidCrystal library)
- ACS712 current sensor
- Relay module (5V)
- Breadboard and jumper wires
- Resistors and connectors

---

## Pin Configuration
- **A0**: Current sensor (ACS)
- **A1**: Main voltage input
- **A2**: Current upper limit
- **A3**: Current lower limit
- **A4**: Voltage upper limit
- **A5**: Voltage lower limit
- **D7**: Relay output

---

## How to Use
1. Upload the code to the Arduino.  
2. Connect the hardware according to the pin configuration above.  
3. The LCD will show the measured voltage and current.  
4. If the values go outside the defined ranges, the relay will switch off.  
5. The relay will turn on again when the values return to the allowed range.  

---

## Required Libraries
Make sure the following library is installed before compiling:  
- [LiquidCrystal](https://www.arduino.cc/en/Reference/LiquidCrystal)
# Water-Pump-Controller

# Water-Pump-Controller
# Water-Pump-Controller
# Water-Pump-Controller
