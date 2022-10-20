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

  if(switch1 == LOW){
    Esplora.writeRGB(0,0,0);
    }
  if(switch2 == LOW){
    Esplora.writeRGB(255,0,0);
    }
  if(switch3 == LOW){
    Esplora.writeRGB(0,128,0);
    }
  if(switch4 == LOW){
    Esplora.writeRGB(0,0,255);
  }
 }
