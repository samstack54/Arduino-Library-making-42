  // Library making example 

 #include"LibC.h"

 LibC LL ; // Class then Object
 
 void setup() {
  pinMode(9, OUTPUT) ;  // LED1
  pinMode(10, OUTPUT) ; // LED2
  pinMode(11, OUTPUT) ; // LED3 
 }

 void loop() {
 LL.Up_Down(9, 1);
 LL.Up_Down(10, 3) ;
 LL.Up_Down(11, 4) ;
 }
