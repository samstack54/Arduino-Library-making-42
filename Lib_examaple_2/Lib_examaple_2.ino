  // Library making example 2
  
# include"Lib2.h"

 void setup() {
  pinMode(9, OUTPUT) ;  // LED1
  pinMode(10, OUTPUT) ; // LED2
  pinMode(11, OUTPUT) ; // LED3 
 }

 void loop() {
 Up_Down(9) ;
 Up_Down(10) ;
 Up_Down(11) ;
 }
