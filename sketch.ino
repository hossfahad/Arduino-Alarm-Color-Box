#include <Adafruit_Circuit_Playground.h>
#define cp CircuitPlayground
#define lb cp.leftButton()
#define rb cp.leftButton()
#define X cp.motionX()
#define Y cp.motionY() 
int color = 0;
int hours = 0;
int minutes = 0;
int seconds = 100;
int userMinutes = 1;
bool pressed = false;
int t = 0;
void setup() {
  // put your setup code here, to run once:

  CircuitPlayground.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(lb == 1 && !pressed){
    pressed = true;
    userMinutes++;
  }
  if(lb == 0){
    pressed = false;
  }
  if(minutes == userMinutes){
    cp.playTone(300,2000);
    CircuitPlayground.playTone(660,100);
delay(150);
CircuitPlayground.playTone(660,100);
delay(300);
CircuitPlayground.playTone(660,100);
delay(300);
CircuitPlayground.playTone(510,100);
delay(100);
CircuitPlayground.playTone(660,100);
delay(300);
CircuitPlayground.playTone(770,100);
delay(550);
CircuitPlayground.playTone(380,100);
delay(575);

CircuitPlayground.playTone(510,100);
delay(450);
CircuitPlayground.playTone(380,100);
delay(400);
CircuitPlayground.playTone(320,100);
delay(500);
CircuitPlayground.playTone(440,100);
delay(300);
CircuitPlayground.playTone(480,80);
delay(330);
CircuitPlayground.playTone(450,100);
delay(150);
CircuitPlayground.playTone(430,100);
delay(300);
CircuitPlayground.playTone(380,100);
delay(200);
CircuitPlayground.playTone(660,80);
delay(200);
CircuitPlayground.playTone(760,50);
delay(150);
CircuitPlayground.playTone(860,100);
delay(300);
CircuitPlayground.playTone(700,80);
delay(150);
CircuitPlayground.playTone(760,50);
delay(350);
CircuitPlayground.playTone(660,80);
delay(300);
CircuitPlayground.playTone(520,80);
delay(150);
CircuitPlayground.playTone(580,80);
delay(150);
CircuitPlayground.playTone(480,80);
delay(500);

CircuitPlayground.playTone(510,100);
delay(450);
CircuitPlayground.playTone(380,100);
delay(400);
CircuitPlayground.playTone(320,100);
delay(500);
CircuitPlayground.playTone(440,100);
delay(300);
CircuitPlayground.playTone(480,80);
delay(330);
CircuitPlayground.playTone(450,100);
delay(150);
CircuitPlayground.playTone(430,100);
delay(300);
CircuitPlayground.playTone(380,100);
delay(200);
CircuitPlayground.playTone(660,80);
delay(200);
CircuitPlayground.playTone(760,50);
delay(150);
CircuitPlayground.playTone(860,100);
delay(300);
CircuitPlayground.playTone(700,80);
delay(150);
CircuitPlayground.playTone(760,50);
delay(350);
CircuitPlayground.playTone(660,80);
delay(300);
CircuitPlayground.playTone(520,80);
delay(150);
CircuitPlayground.playTone(580,80);
delay(150);
CircuitPlayground.playTone(480,80);
delay(500);

CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(760,100);
delay(100);
CircuitPlayground.playTone(720,100);
delay(150);
CircuitPlayground.playTone(680,100);
delay(150);
CircuitPlayground.playTone(620,150);
delay(300);

CircuitPlayground.playTone(650,150);
delay(300);
CircuitPlayground.playTone(380,100);
delay(150);
CircuitPlayground.playTone(430,100);
delay(150);

CircuitPlayground.playTone(500,100);
delay(300);
CircuitPlayground.playTone(430,100);
delay(150);
CircuitPlayground.playTone(500,100);
delay(100);
CircuitPlayground.playTone(570,100);
delay(220);

CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(760,100);
delay(100);
CircuitPlayground.playTone(720,100);
delay(150);
CircuitPlayground.playTone(680,100);
delay(150);
CircuitPlayground.playTone(620,150);
delay(300);

CircuitPlayground.playTone(650,200);
delay(300);

CircuitPlayground.playTone(1020,80);
delay(300);
CircuitPlayground.playTone(1020,80);
delay(150);
CircuitPlayground.playTone(1020,80);
delay(300);

CircuitPlayground.playTone(380,100);
delay(300);
CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(760,100);
delay(100);
CircuitPlayground.playTone(720,100);
delay(150);
CircuitPlayground.playTone(680,100);
delay(150);
CircuitPlayground.playTone(620,150);
delay(300);

CircuitPlayground.playTone(650,150);
delay(300);
CircuitPlayground.playTone(380,100);
delay(150);
CircuitPlayground.playTone(430,100);
delay(150);

CircuitPlayground.playTone(500,100);
delay(300);
CircuitPlayground.playTone(430,100);
delay(150);
CircuitPlayground.playTone(500,100);
delay(100);
CircuitPlayground.playTone(570,100);
delay(420);

CircuitPlayground.playTone(585,100);
delay(450);

CircuitPlayground.playTone(550,100);
delay(420);

CircuitPlayground.playTone(500,100);
delay(360);

CircuitPlayground.playTone(380,100);
delay(300);
CircuitPlayground.playTone(500,100);
delay(300);
CircuitPlayground.playTone(500,100);
delay(150);
CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(760,100);
delay(100);
CircuitPlayground.playTone(720,100);
delay(150);
CircuitPlayground.playTone(680,100);
delay(150);
CircuitPlayground.playTone(620,150);
delay(300);

CircuitPlayground.playTone(650,150);
delay(300);
CircuitPlayground.playTone(380,100);
delay(150);
CircuitPlayground.playTone(430,100);
delay(150);

CircuitPlayground.playTone(500,100);
delay(300);
CircuitPlayground.playTone(430,100);
delay(150);
CircuitPlayground.playTone(500,100);
delay(100);
CircuitPlayground.playTone(570,100);
delay(220);

CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(760,100);
delay(100);
CircuitPlayground.playTone(720,100);
delay(150);
CircuitPlayground.playTone(680,100);
delay(150);
CircuitPlayground.playTone(620,150);
delay(300);

CircuitPlayground.playTone(650,200);
delay(300);

CircuitPlayground.playTone(1020,80);
delay(300);
CircuitPlayground.playTone(1020,80);
delay(150);
CircuitPlayground.playTone(1020,80);
delay(300);

CircuitPlayground.playTone(380,100);
delay(300);
CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(760,100);
delay(100);
CircuitPlayground.playTone(720,100);
delay(150);
CircuitPlayground.playTone(680,100);
delay(150);
CircuitPlayground.playTone(620,150);
delay(300);

CircuitPlayground.playTone(650,150);
delay(300);
CircuitPlayground.playTone(380,100);
delay(150);
CircuitPlayground.playTone(430,100);
delay(150);

CircuitPlayground.playTone(500,100);
delay(300);
CircuitPlayground.playTone(430,100);
delay(150);
CircuitPlayground.playTone(500,100);
delay(100);
CircuitPlayground.playTone(570,100);
delay(420);

CircuitPlayground.playTone(585,100);
delay(450);

CircuitPlayground.playTone(550,100);
delay(420);

CircuitPlayground.playTone(500,100);
delay(360);

CircuitPlayground.playTone(380,100);
delay(300);
CircuitPlayground.playTone(500,100);
delay(300);
CircuitPlayground.playTone(500,100);
delay(150);
CircuitPlayground.playTone(500,100);
delay(300);

CircuitPlayground.playTone(500,60);
delay(150);
CircuitPlayground.playTone(500,80);
delay(300);
CircuitPlayground.playTone(500,60);
delay(350);
CircuitPlayground.playTone(500,80);
delay(150);
CircuitPlayground.playTone(580,80);
delay(350);
CircuitPlayground.playTone(660,80);
delay(150);
CircuitPlayground.playTone(500,80);
delay(300);
CircuitPlayground.playTone(430,80);
delay(150);
CircuitPlayground.playTone(380,80);
delay(600);

CircuitPlayground.playTone(500,60);
delay(150);
CircuitPlayground.playTone(500,80);
delay(300);
CircuitPlayground.playTone(500,60);
delay(350);
CircuitPlayground.playTone(500,80);
delay(150);
CircuitPlayground.playTone(580,80);
delay(150);
CircuitPlayground.playTone(660,80);
delay(550);

CircuitPlayground.playTone(870,80);
delay(325);
CircuitPlayground.playTone(760,80);
delay(600);

CircuitPlayground.playTone(500,60);
delay(150);
CircuitPlayground.playTone(500,80);
delay(300);
CircuitPlayground.playTone(500,60);
delay(350);
CircuitPlayground.playTone(500,80);
delay(150);
CircuitPlayground.playTone(580,80);
delay(350);
CircuitPlayground.playTone(660,80);
delay(150);
CircuitPlayground.playTone(500,80);
delay(300);
CircuitPlayground.playTone(430,80);
delay(150);
CircuitPlayground.playTone(380,80);
delay(600);

CircuitPlayground.playTone(660,100);
delay(150);
CircuitPlayground.playTone(660,100);
delay(300);
CircuitPlayground.playTone(660,100);
delay(300);
CircuitPlayground.playTone(510,100);
delay(100);
CircuitPlayground.playTone(660,100);
delay(300);
CircuitPlayground.playTone(770,100);
delay(550);
CircuitPlayground.playTone(380,100);
delay(575);
}
  t++;
  if(t == 6000){
    minutes++;
    t = 0;
  }
  if(minutes == 60){
    hours++;
    minutes = 0;
  }
  delay(10);

// Capacitive touch - light show
// if (touch sensor > 200) => change color on neopixel
      cp.clearPixels();
      Serial.println(cp.readCap(0));
if (cp.readCap(0) >= 200) {
    color = 1;
}
if (color == 1) {
  for (int i=0;i<10;i++) {
    cp.setPixelColor(i,255,0,0);
}
}
if (cp.readCap(1) >= 200) {
    color = 2;
}
if (color == 2) {
    for (int i=0;i<10;i++) {
    cp.setPixelColor(i,0,255,0);
}
}
}
