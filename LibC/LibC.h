
 class LibC {
  public:

   void Up_Down(int pin, int del) {
   
   for (int i=0; i<=255; i++) {
   analogWrite(pin, i) ;
   delay(del) ;
   }
   for (int i=255; i>=0; i--) {
   analogWrite(pin, i) ;
   delay(del) ;
   }  
  }
 };
