# Soil Moisture Monitoring System

## Overview
This project is designed to monitor the soil moisture level and alert the user when the soil is dry. It utilizes an Arduino Uno R3, an LCD display, and a buzzer for notifications.

## Components
- **Arduino Uno R3**: The main controller used for managing the inputs and outputs of the system.
- **LCD (Liquid Crystal Display)**: Displays the current moisture level and status messages.
- **Buzzer**: Provides an audible alert when the soil moisture level is below the threshold.

## Setup
1. Connect the LCD to the Arduino Uno R3 using the digital pins 7, 6, 5, 4, 3, and 2.
2. Attach the buzzer to digital pin 12.
3. Connect the soil moisture sensor to analog pin A0.

## Code Description
The code for the project includes two main functions:
- `setup()`: Initializes the LCD and sets the pin modes.
- `loop()`: Continuously reads the moisture level from the sensor and updates the LCD. If the moisture level is below a certain threshold, it activates the buzzer.

## Usage
Once the system is powered on, it will display the message "Soil Moisture" on the LCD. The moisture level is read from the sensor, and if the soil is dry, the buzzer will sound an alarm.

## Maintenance
To ensure accurate readings and prolong the life of the soil moisture sensor, power is applied only during the readings and then turned off.

## Contributing
If you would like to contribute to this project or suggest improvements, please open an issue or submit a pull request.

## License
This project is open-source and available under the MIT License.

## Acknowledgments
- Thanks to the Arduino community for support and inspiration.

