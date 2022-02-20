
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
