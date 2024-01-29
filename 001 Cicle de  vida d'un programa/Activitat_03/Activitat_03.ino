
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // 
  delay(60);                      
  digitalWrite(13, LOW);   // Espacio entre latidos
  delay(60);                      
}
