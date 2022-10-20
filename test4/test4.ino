#include <TFT.h>
#include <SPI.h>
#include <Esplora.h>

char ColorName[5];
int mode=1;
int type=0;

void setup() {
  // put your setup code here, to run once:

  EsploraTFT.begin();  
  EsploraTFT.background(255,255,255);
  
  EsploraTFT.stroke(0,0,0);
  EsploraTFT.setTextSize(1);
  EsploraTFT.text("Please select color",2,2);
  
  EsploraTFT.stroke(0,255,255);    
  EsploraTFT.fill(0,255,255);
  EsploraTFT.rect(20,10,EsploraTFT.width()-20,EsploraTFT.height()-10); 

  EsploraTFT.stroke(0,0,0);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("Red",22,12);

  EsploraTFT.stroke(0,0,0);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("Green",22,32);

  EsploraTFT.stroke(0,0,0);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("Blue",22,52); 

  Esplora.writeRGB(255,0,0); //Red (initial status)

  EsploraTFT.stroke(0,0,0);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("*",5,12);

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("*",5,32);

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("*",5,52);

}

void loop() {
  // put your main code here, to run repeatedly:

int switch1 = Esplora.readButton(SWITCH_DOWN);
int switch2 = Esplora.readButton(SWITCH_LEFT);
int switch3 = Esplora.readButton(SWITCH_UP);
int switch4 = Esplora.readButton(SWITCH_RIGHT);

int valueY = Esplora.readJoystickY();
      
  if(switch1 == LOW){
    mode++;
    delay(400);
    EsploraTFT.stroke(255,255,255);    
    EsploraTFT.fill(255,255,255);
    EsploraTFT.rect(0,10,20,EsploraTFT.height()); 
    }

  if(mode > 3){
    mode = 0;
    }  
    
  if(mode==0){
    Esplora.writeRGB(0,0,0); //LED off
    } 
  
  if(mode==1){
    Esplora.writeRGB(255,0,0);
    EsploraTFT.stroke(0,0,0);
    EsploraTFT.setTextSize(2);
    EsploraTFT.text("*",5,12);
  }

  if(mode==2){
    Esplora.writeRGB(0,128,0);
    EsploraTFT.stroke(0,0,0);
    EsploraTFT.setTextSize(2);
    EsploraTFT.text("*",5,32);
  }
  
  if(mode==3){
    Esplora.writeRGB(0,0,255);
    EsploraTFT.stroke(0,0,0);
    EsploraTFT.setTextSize(2);
    EsploraTFT.text("*",5,52);
    } 
}
