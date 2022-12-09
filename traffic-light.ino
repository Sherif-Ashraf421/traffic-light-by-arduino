int red = 13;
int yellow = 12;
int green = 11;
int delayred =2000;
int delaygreen =2000;
int delayyellow =750;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT) ;
pinMode(yellow,OUTPUT) ;
pinMode(green,OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(red,HIGH); 
  delay(delayred); 
  digitalWrite(red,LOW); 
  
  digitalWrite(yellow,HIGH); 
  delay(delayyellow); 
  digitalWrite(yellow,LOW); 

  digitalWrite(green,HIGH); 
  delay(delaygreen); 
  digitalWrite(green,LOW);    
}