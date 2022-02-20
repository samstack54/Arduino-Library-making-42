 // Library making example

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

  // -------- 만든 함수 ---------
  
  void Up_Down(int pin) {
    
   for (int i=0; i<=255; i++) {
   analogWrite(pin, i) ;
   delay(3) ;
   }
   for (int i=255; i>=0; i--) {
   analogWrite(pin, i) ;
   delay(3) ;
   }   
  }
