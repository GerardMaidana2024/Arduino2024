
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN,HIGH); //Primer latido
  delay(300);
  digitalWrite(LED_BUILTIN,LOW); //Pausa entre latidos
  delay(100);
  digitalWrite(LED_BUILTIN,HIGH); //Segundo latido
  delay(200);                    
  digitalWrite(LED_BUILTIN, LOW);   //Pausa para empezar el ciclo de latidos
  delay(750);                      
}
