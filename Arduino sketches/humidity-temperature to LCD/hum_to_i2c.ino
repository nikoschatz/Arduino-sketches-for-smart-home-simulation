//importing all the necessary libraries
#include <DHT.h>
#include <DHT_U.h>
#include <Adafruit_Sensor.h>

#include <Wire.h>  
#include <LiquidCrystal_I2C.h>

#define DHTPIN 5     //digital pin sensor

// Uncomment whatever type you're using!

  #define DHTTYPE DHT11      // DHT 11
  //#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
  //#define DHTTYPE DHT21

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

DHT dht(DHTPIN, DHTTYPE);


void setup() {
//starts the screen and the sensor 
  lcd.begin(16, 2);
  dht.begin();

}

void loop() {

 delay(1000);
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
   lcd.print("NO CONNECTION");
    return;
  }

 //sets the cursor on the upper line of the screen
  lcd.setCursor(0, 0);
  lcd.print("Humidity:");
  lcd.print(h);
  lcd.print(" % ");
 //sets the cursor on the lower line of the screen
  lcd.setCursor(0,1);
  lcd.print("Temp:");
  lcd.print(t);
  lcd.print(" C");

}
