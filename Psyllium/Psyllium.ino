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
    Esplora.writeRGB(0,0,0); //LED off
  }

//order of overture 
 if(slider>512){ 
    if(mode == 0){
      Esplora.writeRGB(0,0,0); //LED off
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(3);
      EsploraTFT.text("Let's MCZ",2,30);
      EsploraTFT.text("overture!",2,55);

      EsploraTFT.stroke(0,128,0);
      EsploraTFT.text("*",12,90);
      
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.text("*",42,90);
      
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.text("*",72,90);
      
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.text("*",102,90);
      
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.text("*",132,90);
      }
 
    if(mode == 1){      
      Esplora.writeRGB(50,0,50); //Purple
  
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("RENI",25,42);
      } 
    
    if(mode == 2){
      Esplora.writeRGB(50,0,0); //Red
 
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("KANAKO",5,42);
      }
        
    if(mode == 3){
      Esplora.writeRGB(0,50,0); //Green
        
      EsploraTFT.stroke(0,128,0);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("MOMOKA",5,42);
      } 
  
    if(mode == 4){
      Esplora.writeRGB(50,50,0); //Yellow
 
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("SHIORI",5,42);   
      }
  
    if(mode == 5){
      Esplora.writeRGB(100,0,100); //Pink
   
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("A-RIN",15,42);
      }
    }

//order of introduction
if(slider<512){
  if(mode == 0){
      Esplora.writeRGB(0,0,0); //LED off
      
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("Let's MCZ",5,30);
      EsploraTFT.text("introduction!",5,55);

      EsploraTFT.stroke(0,128,0);
      EsploraTFT.text("*",12,90);
      
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.text("*",42,90);
      
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.text("*",72,90);
      
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.text("*",102,90);
      
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.text("*",132,90);
      }
      
    if(mode == 1){      
      Esplora.writeRGB(50,0,50); //Purple
  
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("RENI",25,42);
      } 
      
    if(mode == 2){
      Esplora.writeRGB(100,0,100); //Pink
   
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("A-RIN",15,42);
      }
    
    if(mode == 3){
      Esplora.writeRGB(50,50,0); //Yellow
 
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("SHIORI",5,42);   
      }
        
    if(mode == 4){
      Esplora.writeRGB(0,50,0); //Green
        
      EsploraTFT.stroke(0,128,0);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("MOMOKA",5,42);
      } 
  
    if(mode == 5){
      Esplora.writeRGB(50,0,0); //Red
 
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.setTextSize(4);
      EsploraTFT.text("KANAKO",5,42);
      }  
    }
    
    if(switch2==LOW){
      Esplora.writeRGB(0,0,0);
      
      EsploraTFT.background(0,0,0);  

      EsploraTFT.stroke(0,128,0);
      EsploraTFT.fill(0,128,0);
      EsploraTFT.rect(0,0,32,EsploraTFT.height());
       
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.fill(255,0,255);
      EsploraTFT.rect(32,0,32,EsploraTFT.height()); 

      EsploraTFT.stroke(255,0,0);
      EsploraTFT.fill(255,0,0);
      EsploraTFT.rect(64,0,32,EsploraTFT.height()); 
      
      EsploraTFT.stroke(255,255,0);
      EsploraTFT.fill(255,255,0);
      EsploraTFT.rect(96,0,32,EsploraTFT.height()); 
      
      EsploraTFT.stroke(128,0,128);
      EsploraTFT.fill(128,0,128);
      EsploraTFT.rect(128,0,32,EsploraTFT.height()); 
  
      EsploraTFT.stroke(0,0,0);
      EsploraTFT.setTextSize(3);
      EsploraTFT.text("Momoiro",16,32);
      EsploraTFT.text("Clover Z",16,64);
     }
     
     if(switch3==LOW){
      EsploraTFT.background(255,255,255);
      EsploraTFT.stroke(255,0,255);
      EsploraTFT.setTextSize(3);
      EsploraTFT.text("Momoiro",16,32);
      EsploraTFT.text("Clover Z",16,64);
     }
     
     if(switch4==LOW){
      EsploraTFT.background(0,0,0);      
      }      
   }

  
  
