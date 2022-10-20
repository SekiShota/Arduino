#include <TFT.h>
#include <SPI.h>
#include <Esplora.h>

int mode = 0;
int display_num=0;
int color_count=0;

void displayChange(int display_num) { //3種類の画面を操作する関数
  
  if(display_num==0) { //メニュー
      EsploraTFT.begin();
      EsploraTFT.background(0,0,0);
      
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(1);
      EsploraTFT.text("<Please select member!>",2,2);
    
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("RENI",22,12);
    
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("KANAKO",22,32);
    
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("MOMOKA",22,52); 
    
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("SHIORI",22,72); 
    
      EsploraTFT.stroke(255,255,255);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("A-RIN",22,92); 
    }

    if(display_num==1){ //色の名前とLED
      EsploraTFT.background(255,255,255);
      
      if(color_count==0){
        EsploraTFT.stroke(128,0,128);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("Purple",2,2);
        EsploraTFT.text("Takagi Reni",2,22);
        EsploraTFT.text("Kanagawa",2,42);
        EsploraTFT.text("1993/06/21",2,62);
        EsploraTFT.text("O",2,82);
        EsploraTFT.text("No.5",2,102);
        Esplora.writeRGB(5,0,5);
        delay(3000);
        }
        if(color_count==1){
          EsploraTFT.stroke(255,0,0);
          EsploraTFT.setTextSize(2);
          EsploraTFT.text("Red",2,2);
          EsploraTFT.text("Momota Kanako",2,22);
          EsploraTFT.text("Shizuoka",2,42);
          EsploraTFT.text("1994/07/12",2,62);
          EsploraTFT.text("AB",2,82);
          EsploraTFT.text("No.2",2,102);
          Esplora.writeRGB(10,0,0);
          delay(3000);
          }
          if(color_count==2){
          EsploraTFT.stroke(0,128,0);
          EsploraTFT.setTextSize(2);
          EsploraTFT.text("Green",2,2);
          EsploraTFT.text("Ariyasu Momoka",2,22);
          EsploraTFT.text("Saitama",2,42);
          EsploraTFT.text("1995/03/15",2,62);
          EsploraTFT.text("A",2,82);
          EsploraTFT.text("No.3",2,102);
          Esplora.writeRGB(0,10,0);
          delay(1000);
          }
          if(color_count==3){
          EsploraTFT.stroke(255,255,0);
          EsploraTFT.setTextSize(2);
          EsploraTFT.text("Yellow",2,2);
          EsploraTFT.text("Tamai Shiori",2,22);
          EsploraTFT.text("Kanagawa",2,42);
          EsploraTFT.text("1995/06/04",2,62);
          EsploraTFT.text("A",2,82);
          EsploraTFT.text("No.1",2,102);
          Esplora.writeRGB(10,10,0);
          delay(1000);
          }
          if(color_count==4){
          EsploraTFT.stroke(255,0,255);
          EsploraTFT.setTextSize(2);
          EsploraTFT.text("Pink",2,2);
          EsploraTFT.text("Sasaki Ayaka",2,22);
          EsploraTFT.text("Kanagawa",2,42);
          EsploraTFT.text("1996/06/11",2,62);
          EsploraTFT.text("AB",2,82);
          EsploraTFT.text("No.4",2,102);
          Esplora.writeRGB(10,0,10);
          delay(1000);
          }
          //display_num=1;           
      }

      if(display_num==2) { //5色の画面
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
        delay(1000);
      }
  }

void check(int color_count) { //アスタリスク ”*” を表示させる
  
  if(color_count==0) {
    EsploraTFT.stroke(128,0,128);
    EsploraTFT.fill(128,0,128);
    EsploraTFT.circle(10,18,6);
    }
    if(color_count==1) {
      EsploraTFT.stroke(255,0,0);
      EsploraTFT.fill(255,0,0);
      EsploraTFT.circle(10,38,6);
      }
      if(color_count==2) {
        EsploraTFT.stroke(0,128,0);
        EsploraTFT.fill(0,128,0);
        EsploraTFT.circle(10,58,6);
        }
        if(color_count==3) {
        EsploraTFT.stroke(255,255,0);
        EsploraTFT.fill(255,255,0);
        EsploraTFT.circle(10,78,6);
        }
        if(color_count==4) {
        EsploraTFT.stroke(255,0,255);
        EsploraTFT.fill(255,0,255);
        EsploraTFT.circle(10,98,6);
        }
  }
void setup() {
  // put your setup code here, to run once:
  EsploraTFT.begin();
  EsploraTFT.background(0,0,0);
  
  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(1);
  EsploraTFT.text("<Please select member!>",2,2);

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("RENI",22,12);

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("KANAKO",22,32);

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("MOMOKA",22,52); 

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("SHIORI",22,72); 

  EsploraTFT.stroke(255,255,255);
  EsploraTFT.setTextSize(2);
  EsploraTFT.text("A-RIN",22,92); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch1 = Esplora.readButton(SWITCH_DOWN);
  int switch2 = Esplora.readButton(SWITCH_LEFT);
  int switch3 = Esplora.readButton(SWITCH_UP);
  int switch4 = Esplora.readButton(SWITCH_RIGHT);

  int valueX = Esplora.readJoystickX();
  int valueY = Esplora.readJoystickY();
  
  if(display_num==0) {
    check(color_count);
    }
  
    if(valueY > 200 && display_num == 0){
      color_count++;
      delay(400);
      EsploraTFT.stroke(0,0,0);    
      EsploraTFT.fill(0,0,0);
      EsploraTFT.rect(0,10,20,EsploraTFT.height()); 
      }
      
    if(color_count > 4 && display_num == 0){
      color_count = 0;
      }  
  
  //メニュー画面 -> LED出力画面
  if(switch4==LOW && display_num == 0) {
    displayChange(++display_num);
    delay(400);
    }
  
  //LED出力画面
  if(switch4==LOW && display_num == 1) { 
    displayChange(++display_num);
    delay(400);
    }
  
  if(switch1==LOW && display_num ==1) {
    displayChange(--display_num);
    Esplora.writeRGB(0,0,0);
    delay(400);
    }
  
  //白い画面
  if(switch1==LOW && display_num == 2) {
    displayChange(--display_num);
    delay(400);
    }
  
  if(switch4==LOW && display_num == 2) {
    displayChange(display_num-2);
    display_num=0;
    Esplora.writeRGB(0,0,0);
    delay(400);
    }
}
