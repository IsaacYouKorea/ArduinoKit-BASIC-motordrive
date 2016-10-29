
int pinLB=2;// L298N IN1, Left Back(왼쪽 뒤로)
int pinLF=3;// L298N IN2. Left Foward(왼쪽 앞으로)
int pinRB=4;// L298N IN3, Right Back
int pinRF=5;// L298N IN4, Right Foward
 
void setup()
 {  
  pinMode(pinLB,OUTPUT);
  pinMode(pinLF,OUTPUT);
  
  pinMode(pinRB,OUTPUT);
  pinMode(pinRF,OUTPUT);
 
  Serial.begin(9600);
 }
 
 
void loop() 
{

  if(Serial.available()){

    String result = Serial.readString();
  
    if (result == "w" ) //직진
    {
      digitalWrite(pinRB,LOW);
      digitalWrite(pinRF,HIGH);
      digitalWrite(pinLB,LOW);
      digitalWrite(pinLF,HIGH);
    }
 
    if (result == "x" ) //후진
    {digitalWrite(pinRB,HIGH);
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,HIGH);
      digitalWrite(pinLF,LOW);
   }
       
 
    if (result == "a" ) //왼쪽 돌기
    { digitalWrite(pinRB,LOW);
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,HIGH);
    }
 
 
    if (result == "d" )//오른쪽 돌기
    { 
     digitalWrite(pinRB,HIGH);
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,LOW);
     digitalWrite(pinLF,HIGH);
    }
 
    if (result == "s" )//정지
    {
     digitalWrite(pinRB,HIGH);
     digitalWrite(pinRF,HIGH);
      digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,HIGH);
   }
  }
}
