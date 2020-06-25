void waktu(){
  // Send Day-of-Week
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  
  // Send date
  Serial.print(rtc.getDateStr());
  //Serial.print(" pukul ");

  // Send time
  Time g = rtc.getTime();
  jam = g.hour;
  menit = g.min;
  //Serial.print(jam);
  //Serial.print(":");
  detik = g.sec;
 
  
  // Wait one second before repeating :)
  delay (1000);
}
