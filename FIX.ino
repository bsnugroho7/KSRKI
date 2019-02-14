
void tampilLcd(int suhuu){
  display.clearDisplay();                           //INISIASI
  display.setTextColor(WHITE);                      //
  display.drawBitmap(0, 0,  suh, 128, 64, WHITE);    //DRAWBITMAP
  if(suhuu>=10){
     display.drawBitmap(0, 0,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if (suhuu>=20){
     display.drawBitmap(0, -3,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if (suhuu>=30){
     display.drawBitmap(0, -6,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if (suhuu>=40){
     display.drawBitmap(0, -9,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if(suhuu>=50){
     display.drawBitmap(0, -12,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if (suhuu>=60){
     display.drawBitmap(0, -15,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if (suhuu>=70){
     display.drawBitmap(0, -18,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  if (suhuu>=80){
     display.drawBitmap(0, -21,  suh1, 128, 64, WHITE);    //DRAWBITMAP
  }
  display.display();
  display.setCursor(77,37);                         //
  display.print(suhuu);                                 //
  display.setTextSize(1);                           //PRINT O  
  display.print("o");                               //
  display.setTextSize(2);                           //PRINT C
  display.println("C");                             //
  display.display();                                
  delay(500);                                 
};
