void mainkan() {
//==========================================================
//  btsetx = digitalRead(BTSET);
//  if(btsetx == 0){
//  settinghy();
//  settingrelay();
//  error = batasatas - suhu;
//  p = error * kp;
//  sumerr = error + errorx;  
//  i = ki * sumerr;  
//  d = error - errorx;
//  pid = p + i + d;
//  
//  if(pid < 1) pid = 0;
//   adcdat = analogRead(0);
//   suhu = (adcdat * (5.0 / 1023.0)) * 100;
//  analogWrite(KIPAS, pid);    
//  delay(200); 
//  batasatas = simpansv + simpanhys;
//  batasbawah = simpansv - simpanhys;
//=========================================================
  ambilSuhu();
  delay(100);
  if(suhuu <= simpanonrelay ){
      digitalWrite(RELAY,LOW);
//      paulus = 50;
  } 
  tampilLcd(suhuu);
  if(suhuu > simpanonrelay){
      digitalWrite(RELAY,HIGH);
  }
}
