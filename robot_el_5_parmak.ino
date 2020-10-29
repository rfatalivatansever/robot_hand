#include <Servo.h>

Servo srv_1 ; //thumb
Servo srv_2 ; //index
Servo srv_3 ; //middle
Servo srv_4 ; //ring
Servo srv_5 ; //pinkie

const byte pot_1 = A0 ; //thumb
const byte pot_2 = A1 ; //index
const byte pot_3 = A2 ; //middle
const byte pot_4 = A3 ; //ring
const byte pot_5 = A4 ; //pinkie

int pot_value_1 ; //thumb
int pot_value_2 ; //index
int pot_value_3 ; //middle
int pot_value_4 ; //ring
int pot_value_5 ; //pinkie

void setup(){
  Serial.begin(9600);
  srv_1.attach(9); //thumb
  srv_2.attach(10);  //index
  srv_3.attach(3);  //middle
  srv_4.attach(6);  //ring
  srv_5.attach(5);  //pinkie
  
}

void loop(){

 pot_value_1 = analogRead(pot_1);
 int new_value_1 = map(pot_value_1,0,1023,0,150);
 srv_1.write(new_value_1);
 Serial.print("Angle Value : ");
 Serial.println(new_value_1);
 delay(50);
 
 pot_value_2 = analogRead(pot_2);
 int new_value_2 = map(pot_value_2,0,1023,0,180);
 srv_2.write(new_value_2);
 Serial.print("Angle Value : ");
 Serial.println(new_value_2);
 delay(50);
  
 pot_value_3 = analogRead(pot_3);
 int new_value_3 = map(pot_value_3, 0,1023,0,180 ); 
 srv_3.write(new_value_3);
 Serial.print("Angle Value : ");
 Serial.println(new_value_3);
 delay(50);

 pot_value_4 = analogRead(pot_4);
 int new_value_4 = map(pot_value_4,0,1023,0,180);
 srv_4.write(new_value_4);
 Serial.print("Angle Value :");
 Serial.println(new_value_4);
 delay(50);

 pot_value_5 = analogRead(pot_5);
 int new_value_5 = map(pot_value_5,0,1023,0,180);
 srv_5.write(new_value_5);
 Serial.print("Angle Value : ");
 Serial.println(new_value_5);
 delay(50); 
  
}
