#include <Esplora.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = Esplora.readLightSensor(); 
  int LightSensor = map(value,0,1023,0,255);
  
  int x_axis = Esplora.readAccelerometer(X_AXIS);
  int y_axis = Esplora.readAccelerometer(Y_AXIS);
  int z_axis = Esplora.readAccelerometer(Z_AXIS);
  
  int switch1 = Esplora.readButton(SWITCH_DOWN);
  int switch2 = Esplora.readButton(SWITCH_LEFT);

  int slider = Esplora.readSlider(); 

  if(switch1 == LOW){
    Esplora.writeRGB(0,0,0);
  }
    
  if(slider==1023){ //left
    if(switch2==LOW){
         Esplora.writeRGB(LightSensor,0,0);
    }
  }

  else if(slider==0){ //right
    if(switch2==LOW){
      Esplora.writeRGB(x_axis,y_axis,z_axis);
      
      /*single test*/
      //Esplora.writeRGB(x_axis,0,0); Red
      //Esplora.writeRGB(0,y_axis,0); Green
      //Esplora.writeRGB(0,0,z_axis); Blue
    }
  }

}
