# Smart Home Simulation

### This project simulates a smart home setting using a network of sensors.

#### It contains three sketches: 

1. Sketch humidity/temperature to LCD
2. Sketch motion sensor to LED
3. Sketch gas sensor to buzzer and LEDs

<br>

#### In order to use this code you will need:

**Instructions**<br>

- the Arduino IDE
- an Arduino board or any other microcontroller (doesn't need to be OEM)
- a gas sensor
- an lcd screen with embedded i2c protocol
- a motion sensor
- 3 led lights of any size
- a small electrical buzzer
- 3 220 Ohm resistors
- jumper wires for the connections
- a breadboard to connect the circuit

#### You will also need these libraries:

**Dependencies**<br>
- Wire library (https://www.resistorpark.com/arduino-wire-library-download/), allows communication with I2C devices
- DHT library (https://www.arduinolibraries.info/libraries/dht-sensor-library), enables the use of DHT sensors
- Adafruit sensor library (https://github.com/adafruit/DHT-sensor-library), enables the use of Adafruit sensors
- Liquid crystal I2C (https://drive.google.com/file/d/1YrbTsh65E21nl6jVxyGqT97LK-3M9f61/view), allows connection with an LCD 

#### For further information on how to get, use and incorporate arduino libraries check the following link:
https://www.arduino.cc/en/Guide/Libraries



#### To run the sketches just open them with the Arduino IDE and run them on the microcontroller.

- Sketch hum/temp_to_LCD initializes a humidity temperature sensor and shows the results on an LCD screen.
- Sketch motion_to_LED initializes a generic motion sensor which when triggered turns on the light.
- Sketch gas_to_buzzer initializes a generic gas sensor which when triggered a buzzer alarm goes off, turning on the red led meaning a danger state.


### This code is open-source. Copy, change or use it by any means.

