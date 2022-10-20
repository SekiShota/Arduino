//right
#define PIN1_IN1  12
#define PIN1_IN2  13
#define PIN1_VREF 11 // PWM

//left
#define PIN2_IN1  7
#define PIN2_IN2  8
#define PIN2_VREF 6 // PWM

//LED
#define led 2

//センサの閾値(120K)
#define N 1010
 
void setup(){
  Serial.begin(9600);
  
  //右車輪
  pinMode(PIN1_IN1,OUTPUT); //12を出力
  pinMode(PIN1_IN2,OUTPUT); //13を出力

  //左車輪
  pinMode(PIN2_IN1,OUTPUT); //7を出力
  pinMode(PIN2_IN2,OUTPUT); //8を出力

  //LED
  pinMode(led,OUTPUT);
}
 
void loop(){

    int sensor = analogRead(A0);

    Serial.println(sensor);
      
    // モーターの回転速度を最大にする
    analogWrite(PIN1_VREF,255); 
    analogWrite(PIN2_VREF,255); 
    
    //LED
    digitalWrite(led,HIGH);

    //左折=右車輪回転(ライン上)
    if(sensor >= N){
        digitalWrite(PIN1_IN1,LOW);
        digitalWrite(PIN1_IN2,HIGH);
        digitalWrite(PIN2_IN1,HIGH);
        digitalWrite(PIN2_IN2,HIGH);
      }

      //右折=左車輪回転(ライン外)
      else{
        digitalWrite(PIN1_IN1,HIGH);
        digitalWrite(PIN1_IN2,HIGH);
        digitalWrite(PIN2_IN1,LOW);
        digitalWrite(PIN2_IN2,HIGH);
        }   
}

