#include <DHT.h>


#include<DHT.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//DHT dht;
//#define DHT11_PIN 7


void setup() {
  lcd.begin(16, 2);

}

void loop() {
  /*int chk = dht.read11(DHT11_PIN);
  lcd.setCursor(1, 1);
  lcd.print("Temp:");
  lcd.print(dht.temperature);
  lcd.print((char)223);
  lcd,setCursor(1,2);
  lcd.print("humidity: ");
  lcd.print(dht.humidity),
  lcd.print("%");
  delay(2000);*/
}
