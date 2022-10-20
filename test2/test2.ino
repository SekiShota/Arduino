#include <Esplora.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch1 = Esplora.readButton(SWITCH_DOWN);
  int switch2 = Esplora.readButton(SWITCH_LEFT);
  int switch3 = Esplora.readButton(SWITCH_UP);
  int switch4 = Esplora.readButton(SWITCH_RIGHT);

  int value2 = Esplora.readJoystickX();
  int value3 = Esplora.readJoystickY();
  int value4 = Esplora.readSlider();

  if(switch1 == LOW){
    Esplora.writeRGB(0,0,0);
    }
    
  if(switch2 == LOW){
    if(value2>=0 && value2<=512 || value2>=-512 && value2<=-1){
      Esplora.writeRGB(128+(value2/4),0,0);
    }
  }
   
  if(switch3 == LOW){
    if(value3>=0 && value3<=512 || value3>=-512 && value3<=-1){
      Esplora.writeRGB(0,64+(value3/8),0);
    }
  }
  
  if(switch4 == LOW){
    if(value4>=0 && value4<=1023 || value4>=-1023 && value4<=-1){
      Esplora.writeRGB(0,0,value4/4);
    }
  }
}  

