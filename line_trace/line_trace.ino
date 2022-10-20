 const int r_motorPin =    9;  // 右のモーター
 const int l_motorPin =   10;  // 左のモーター
 const int threshold  = 1000;  // センサーの閾値
 
 void setup() {
     Serial.begin(9600) ;   
     pinMode(r_motorPin, OUTPUT); 
     pinMode(l_motorPin, OUTPUT);  
 }
 
 void loop() {
  
  // 起動10秒でモーターを停止する
  if(millis() < 10000){
 
    // 左のセンサーの値
    int green = analogRead(A0)  ;  
    // 右のセンサーの値
    int white = analogRead(A1)  ;  
 
    Serial.print(" L");
    Serial.print(green);
    Serial.print(" R");
    Serial.print(white);
    Serial.print("\r\n");
    
    digitalWrite(r_motorPin, LOW);
    digitalWrite(l_motorPin, LOW);
    
    // 直進
    if(green < threshold && white < threshold){
      digitalWrite(r_motorPin, HIGH);
      digitalWrite(l_motorPin, HIGH); 
    
    // 左へ  
    }else if(green >= threshold && white < threshold){
      digitalWrite(r_motorPin, HIGH);
      digitalWrite(l_motorPin, LOW); 
    
    // 右へ  
    }else if(white >= threshold && green < threshold){
      digitalWrite(r_motorPin, LOW);
      digitalWrite(l_motorPin, HIGH); 
    }
  }else{
    // モーターの完全停止
    digitalWrite(r_motorPin, LOW);
    digitalWrite(l_motorPin, LOW);   
  }
 }
 
