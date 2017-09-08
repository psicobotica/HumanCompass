/*
  Blink - Board and driver test
  Turns on and off the onboard LED
*/

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000);                     
  digitalWrite(LED_BUILTIN, LOW);  
  delay(3000);                     
}
