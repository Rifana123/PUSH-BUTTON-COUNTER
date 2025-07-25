# PUSH-BUTTON-COUNTER

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: RIFANA NAZREEN A

**INTERN ID**:CT04DH23

**DOMAIN**: EMBEDDED SYSTEMS

**DURATION**: 4 WEEKS

**MENTOR**: NEELA SANTHOSH

DESCRIPTION:
This internship task involves building a digital push-button counter system using an Arduino Uno and a 16x2 LCD display. The objective is to count the number of times a button is pressed and display that count in real-time on the LCD screen. 
The hardware setup includes a push button connected to a digital input pin on the Arduino, a potentiometer to adjust the LCD contrast, and a 16x2 LCD connected using digital pins 2 through 5 and control pins 11 and 12. The Arduino is programmed to detect each valid button press and increment a counter, which is then displayed on the LCD.
CODE DESCRIPTION:
The code begins by including the LiquidCrystal library to control the LCD and initializing the LCD with the appropriate digital pins. The button is connected using the internal pull-up resistor (INPUT_PULLUP), so the default state is HIGH and becomes LOW when pressed. To avoid incorrect counts due to mechanical bouncing of the button, a debouncing technique is implemented using a time delay (50 ms). When the Arduino detects a stable transition from HIGH to LOW (indicating a button press), it increments the counter and updates the LCD display. The LCD is first cleared at the relevant position before printing the new count to avoid overlapping digits.
APPLICATION:
This system provides a simple yet effective way to monitor discrete input events such as button presses.
It has practical applications in real-world scenarios like people counting in entrances and exits, event tally counters in laboratories, basic voting systems, or machine cycle counting in industrial environments. This task demonstrates the fundamentals of interfacing input devices with microcontrollers, using display modules, and implementing software-level debouncing to ensure reliable and accurate user input detection. It’s an excellent beginner-level project that builds a strong foundation in embedded systems and real-time user interaction design.

OUTPUT:

<img width="1308" height="732" alt="Image" src="https://github.com/user-attachments/assets/7d5507f3-65c6-4278-98b8-623d05d78a30" />
