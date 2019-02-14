void GPIO() {
    pinMode(RELAY, OUTPUT);
    digitalWrite(RELAY, LOW);
}

int suhuu;

float ambilSuhu()
{
//    adcdat = analogRead(LMKU);
////  suhu=adcdat*0.4888;
//    suhu = (adcdat * (5.0 / 1024.0)) * 100;
////  suhu = adcdat / 9.309;
    measurement = suhu;
    KG = errorEST/(errorEST + errorMEA);
    currentEST = (previousEST + KG*(measurement - previousEST));
    errorEST = (1 - KG)*previousEST;
       sensorSuhu.requestTemperatures();
       suhu = sensorSuhu.getTempCByIndex(0);

    previousEST = currentEST;
    suhuu=currentEST;
    Serial.print("suhu : ");
    Serial.print(",");
    Serial.println(currentEST);
   return currentEST;   


}
