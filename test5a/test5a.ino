#include <TFT.h>
#include <SPI.h>
#include <Esplora.h>

int display_num=0;
int color_count=0;

void displayChange(int display_num) { //3種類の画面を操作する関数
  
  if(display_num==0) { //メニュー
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
    }

    if(display_num==1){ //色の名前とLED
      EsploraTFT.background(255,255,255);
      
      EsploraTFT.stroke(0,0,0);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("LED is",2,2);

      if(color_count==0){
        EsploraTFT.stroke(255,0,0);
        EsploraTFT.setTextSize(4);
        EsploraTFT.text("Red",40,60);
        Esplora.writeRGB(5,0,0);
        delay(1000);
        }
        if(color_count==1){
          EsploraTFT.stroke(0,128,0);
          EsploraTFT.setTextSize(4);
          EsploraTFT.text("Green",25,60);
          Esplora.writeRGB(0,5,0);
          delay(1000);
          }
          if(color_count==2){
          EsploraTFT.stroke(0,0,255);
          EsploraTFT.setTextSize(4);
          EsploraTFT.text("Blue",40,60);
          Esplora.writeRGB(0,0,5);
          delay(1000);
          }
          //display_num=1;           
      }

      if(display_num==2) { //白い画面
        EsploraTFT.background(255,255,255);
        delay(1000);
      }
  }

void check(int color_count) { //アスタリスク ”*” を表示させる
  
  if(color_count==0) {
    EsploraTFT.stroke(0,0,0);
    EsploraTFT.setTextSize(2);
    EsploraTFT.text("*",5,12);
    }
    if(color_count==1) {
      EsploraTFT.stroke(0,0,0);
      EsploraTFT.setTextSize(2);
      EsploraTFT.text("*",5,32);
      }
      if(color_count==2) {
        EsploraTFT.stroke(0,0,0);
        EsploraTFT.setTextSize(2);
        EsploraTFT.text("*",5,52);
        }
  }

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

int valueY = Esplora.readJoystickY();

int switch1 = Esplora.readButton(SWITCH_DOWN);
int switch4 = Esplora.readButton(SWITCH_RIGHT);

if(display_num==0) {
  check(color_count);
  }

  if(valueY > 200 && display_num == 0){
    color_count++;
    delay(400);
    EsploraTFT.stroke(255,255,255);    
    EsploraTFT.fill(255,255,255);
    EsploraTFT.rect(0,10,20,EsploraTFT.height()); 
    }
    
  if(color_count > 2 && display_num == 0){
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
