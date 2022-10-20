#include <TFT.h>
#include <SPI.h>
#include <Esplora.h>

int mode = -1;

void setup() {
  // put your setup code here, to run once:
  EsploraTFT.begin();
  EsploraTFT.background(0,0,0);  // clear the screen with black
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch1 = Esplora.readButton(SWITCH_DOWN);
  int switch2 = Esplora.readButton(SWITCH_LEFT);
  int switch3 = Esplora.readButton(SWITCH_UP);
  int switch4 = Esplora.readButton(SWITCH_RIGHT);

  int valueX = Esplora.readJoystickX();
  int valueY = Esplora.readJoystickY();
  int slider = Esplora.readSlider();

  if(switch1 == LOW){
    mode++;
    delay(400);
    EsploraTFT.background(0,0,0);
    }

  if(mode > 5){
    mode = -1;
    }
    
  if(mode == -1){
    Esplora.writeRGB(0,0,0);
    }

 //Display member's catch phrase
  if(slider>512){
    if(mode == 0){
      Esplora.writeRGB(0,0,0); //LED off
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("Introduction",2,30);
      EsploraTFT.text("of MCZ",2,55);
      EsploraTFT.text("catch phrase!",2,80);

      EsploraTFT.stroke(0,128,0);
      EsploraTFT.text("*",12,100);
      
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.text("*",42,100);
      
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.text("*",72,100);
      
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.text("*",102,100);
      
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.text("*",132,100);
      }
    
      if(mode == 1){
        Esplora.writeRGB(50,0,50); //purple
            
        EsploraTFT.stroke(128,0,128);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Steel girl",0,0);      
        }
        
     if(mode == 2){
       Esplora.writeRGB(100,0,100); //pink

        EsploraTFT.stroke(255,0,255);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Absolute idol",0,80);
        }
        
      if(mode == 3){
        Esplora.writeRGB(100,100,0); //yellow
          
        EsploraTFT.stroke(255,255,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Wakadaisho",0,25);
        }
        
      if(mode == 4){
        Esplora.writeRGB(0,50,0); //green
              
        EsploraTFT.stroke(0,128,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Small giant",0,100);
        }  
      
      if(mode == 5){
        Esplora.writeRGB(50,0,0); //red

        EsploraTFT.stroke(255,0,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Cinderella of",0,45);
        EsploraTFT.text("Chabatake",0,60);    
        }

      if(switch2 == LOW){
        Esplora.writeRGB(0,0,0); //red
        EsploraTFT.background(0,0,0);

        EsploraTFT.stroke(128,0,128);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Steel girl",0,0);
          
        EsploraTFT.stroke(255,0,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Cinderella of",0,45);
        EsploraTFT.text("Chabatake",0,60);    
                 
        EsploraTFT.stroke(0,128,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Small giant",0,100);
          
        EsploraTFT.stroke(255,255,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Wakadaisho",0,25);
         
        EsploraTFT.stroke(255,0,255);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Absolute idol",0,80);
        }
        
      if(switch3 == LOW){
        Esplora.writeRGB(0,0,0);
        EsploraTFT.background(0,0,0);
          
        EsploraTFT.stroke(255,0,255);
        
        EsploraTFT.setTextSize(2);        
        EsploraTFT.text("We are",5,2);
        EsploraTFT.text("weekend",5,27);          
        EsploraTFT.text("heroin",5,52);    
        EsploraTFT.text("Momoiro",5,77);          
        EsploraTFT.text("Clover ",5,102); 
        
        EsploraTFT.setTextSize(5); 
        EsploraTFT.text("*",110,35);  
        EsploraTFT.text("Z!!",95,90);          
        }      
      }

  //Display member's birthday
   if(slider<512){
     if(mode == 0){
      Esplora.writeRGB(0,0,0); //LED off
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("Introduction",2,30);
      EsploraTFT.text("of MCZ",2,55);
      EsploraTFT.text("Birthday!",2,80);

      EsploraTFT.stroke(0,128,0);
      EsploraTFT.text("*",12,100);
      
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.text("*",42,100);
      
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.text("*",72,100);
      
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.text("*",102,100);
      
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.text("*",132,100);
      }
      
     if(mode == 1){
       Esplora.writeRGB(50,0,0); //red
          
       EsploraTFT.stroke(255,0,0);
       EsploraTFT.setTextSize(2);
       EsploraTFT.text("1994/07/12",5,0);    
       }
        
      if(mode == 2){
        Esplora.writeRGB(50,50,0); //yellow
          
        EsploraTFT.stroke(255,255,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1995/06/04",5,25);
        }

      if(mode == 3){
        Esplora.writeRGB(100,0,100); //pink
         
        EsploraTFT.stroke(255,0,255);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1996/06/11",5,50);
        }

      if(mode == 4){
        Esplora.writeRGB(0,50,0); //green
          
        EsploraTFT.stroke(0,128,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1995/03/15",5,75);
        }
        
      if(mode == 5){
        Esplora.writeRGB(50,0,50); //purple
          
        EsploraTFT.stroke(128,0,128);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1993/06/21",5,100);
        }
   
      if(switch2 == LOW){
        Esplora.writeRGB(0,0,0);
        EsploraTFT.stroke(255,0,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1994/07/12",5,0);
         
        EsploraTFT.stroke(255,255,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1995/06/04",5,25);
              
        EsploraTFT.stroke(255,0,255);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1996/06/11",5,50);
          
        EsploraTFT.stroke(0,128,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1995/03/15",5,75);
          
        EsploraTFT.stroke(128,0,128);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("1993/06/21",5,100);
        }

      if(switch3 == LOW){
        Esplora.writeRGB(0,0,0); //LED off
        EsploraTFT.background(0,0,0);
        
        EsploraTFT.stroke(255,255,255);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Momoiro",2,10);
        EsploraTFT.text("Clover Z",2,35);
        EsploraTFT.text("since",2,65);
        EsploraTFT.text("2008/05/17",10,85);
  
        EsploraTFT.stroke(0,128,0);
        EsploraTFT.text("*",12,110);
        
        EsploraTFT.stroke(255,0,255);
        EsploraTFT.text("*",42,110);
        
        EsploraTFT.stroke(255,0,0);
        EsploraTFT.text("*",72,110);
        
        EsploraTFT.stroke(255,255,0);
        EsploraTFT.text("*",102,110);
        
        EsploraTFT.stroke(128,0,128);
        EsploraTFT.text("*",132,110);
        }
      }
        if(switch4 == LOW){
        Esplora.writeRGB(0,0,0); //LED off
        EsploraTFT.background(0,0,0);
        }    
    }


    

    
  
 

