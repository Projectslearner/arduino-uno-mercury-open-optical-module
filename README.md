# Mercury Tilt Switch with LED and Serial Monitor

#### Project Overview

This project demonstrates how to use a mercury tilt switch with an Arduino to control an LED and provide real-time feedback via the Serial Monitor. When the switch is tilted, the LED will turn on and a message will be displayed in the Serial Monitor.

#### Components Needed

1. **Arduino Board**
2. **Mercury Tilt Switch**
3. **LED**
4. **Resistor (220 ohms for the LED)**
5. **Jumper Wires**
6. **Breadboard**

### Block diagram


#### Instructions

1. **Set Up the Circuit:**
   - Connect one end of the mercury tilt switch to digital pin 3 on the Arduino and the other end to GND.
   - Connect the longer leg (anode) of the LED to digital pin 13 on the Arduino through a 220-ohm resistor.
   - Connect the shorter leg (cathode) of the LED to GND.

2. **Initialize Pins and Serial Communication:**
   - Define the pin numbers for the LED and switch.
   - Initialize the LED pin as an output and the switch pin as an input.
   - Start serial communication at a baud rate of 9600.

3. **Read the Switch State and Control the LED:**
   - Continuously read the state of the mercury tilt switch.
   - If the switch is tilted (switch state is HIGH), turn on the LED and print a message to the Serial Monitor.
   - If the switch is not tilted (switch state is LOW), turn off the LED and print a corresponding message to the Serial Monitor.

4. **Add a Delay for Stability:**
   - Add a small delay in the `loop()` function to stabilize the readings and reduce the frequency of messages sent to the Serial Monitor.

#### Applications

- **Tilt Detection:** This setup can be used to detect the tilt of an object and provide visual feedback.
- **Interactive Projects:** Integrate tilt detection in interactive projects where the orientation of an object triggers different actions.
- **Educational Projects:** Use this project to teach the concepts of digital input reading, condition checking, and output control with an Arduino.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner