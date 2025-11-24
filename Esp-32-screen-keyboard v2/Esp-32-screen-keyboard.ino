#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
byte a=5;
byte b=18;
byte c=19;
byte d=2;
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire,-1);

void setup() {
pinMode(a,INPUT_PULLUP);
pinMode(b,INPUT_PULLUP);
pinMode(c,INPUT_PULLUP);
pinMode(d,INPUT_PULLUP);
display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
display.setCursor( 0, 0);
display.printf("First \nDisplay \nKeyboard");
  display.display();

  display.clearDisplay();
    delay(1000);
display.setCursor( 0, 0);
}

void loop() {
if(digitalRead(a)==LOW){
   
      
     display.printf("A");
      display.display();
      delay(200);
}
if(digitalRead(b)==LOW){
   
      
     display.printf("B");
      display.display();
      delay(200);
}
if(digitalRead(c)==LOW){

      
     display.printf("C");
      display.display();
      delay(200);
}
 
}