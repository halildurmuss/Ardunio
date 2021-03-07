/*
Servo motoru 15 er derece ileri 30ar derece geriye hareketi saðlanmalýdýr.
*/
#include <Servo.h>
Servo servo;

void setup(){
  servo.attach(10); 
}

void loop(){
  for(int a=0; a<=180; a=a+15){
    servo.write(a);
    delay(1000);
  }
  for(int a=180; a>=0; a=a-30){
    servo.write(a);
    delay(1000);
  }
}
