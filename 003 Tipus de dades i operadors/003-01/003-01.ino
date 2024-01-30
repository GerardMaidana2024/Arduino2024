int T  =  9;
int Y  =  4;
int K  =  8;
int N  =  3;
int P  = - 3;
boolean Z  = true;
boolean W = false;
boolean A  =  false;
boolean B  =  true;

void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.println("a. Afirmacio 1: (T > 10 && T < 14) = ");
          if (T > 10 && T < 14); // Afirmacio 1
              Serial.print("boolean A" or "boolean B");
  Serial.println("b. Afirmacio 2: (Y > 4 || Y < 7)=");
          if ((Y > 4 || Y < 7)); // Afirmacio 2
              Serial.print("boolean A" or "boolean B");
  Serial.println()
  if ((K > 8 && K < 10)); // Afirmacio 3
  Serial.print("boolean A" or "boolean B");
  if ((N > 2 || N < 20)); // Afirmacio 4
  Serial.print("boolean A" or "boolean B");
  if ((P > 0 && P < -3)); // Afirmacio 5
  Serial.print("boolean A" or "boolean B");
  if (T > 0 || Z); // Afirmacio 6
  Serial.print("boolean A" or "boolean B");
  if (P > 0 && B); // Afirmacio 7
  Serial.print("boolean A" or "boolean B");
  if (W && B); // Afirmacio 8
  Serial.print("boolean A" or "boolean B");
  if (W && A); // Afirmacio 9
  Serial.print("boolean A" or "boolean B");
}

void loop() {
  // put your main code here, to run repeatedly:

}
