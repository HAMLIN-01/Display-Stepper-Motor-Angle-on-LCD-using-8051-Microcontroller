# Display-Stepper-Motor-Angle-on-LCD-using-8051-Microcontroller
This project demonstrates how to display the angle of rotation of a stepper motor on an LCD using an 8051 microcontroller.
# Description
This project demonstrates how to display the angle of rotation of a stepper motor on an LCD using an 8051 microcontroller. As the stepper motor rotates, the corresponding angle is calculated and shown in real-time on the LCD. The project is programmed in Embedded C, and the entire system is simulated using Proteus, enabling easy testing without physical components.
This project is useful for learning how to track and display the precise position of a motor, which is essential in applications like robotics and CNC machines.
# Features:
Microcontroller Used: 8051 (AT89C51 or equivalent)
Programming Language: Embedded C
Simulation Software: Proteus
Display Device: 16x2 LCD
Motor Control: Stepper motor using driver (e.g., ULN2003)
# How it Works:
The stepper motor is connected to the 8051 microcontroller via a driver circuit.
The microcontroller tracks the number of steps taken by the motor and converts it into the corresponding angle of rotation.
The calculated angle is displayed on the LCD, updating in real-time as the motor rotates.
The Proteus simulation allows for visual verification of the angle being correctly displayed as the motor moves.
# Simulation:
In Proteus, the LCD shows the stepper motor's current angle, which updates with each movement of the motor, helping to confirm the accuracy of the motor's control and display.
