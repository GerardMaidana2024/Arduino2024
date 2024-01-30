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
          if (T > 10 && T < 14) {
            Serial.print("true");
          }                                                      // Afirmacio 1
          else {
            Serial.print("false");
          }
  Serial.println("b. Afirmacio 2: (Y > 4 || Y < 7)=");
          if ((Y > 4 || Y < 7)) {
            Serial.print("true");
          }                                                     // Afirmacio 2
          else {
            Serial.print("false");
          }
  Serial.println("c. Afirmacio 3: (K > 8 && K < 10) =");
          if ((K > 8 && K < 10))
            Serial.print("true");
          }                                                     // Afirmacio 3
          else {
            Serial.print("false");
          }
  Serial.println("d. Afirmacio 4: (N > 2 || N < 20) =");
          if ((N > 2 || N < 20))
            Serial.print("true");
          }                                                     // Afirmacio 4
          else {
            Serial.print("false");
          }
  Serial.println("e. Afirmacio 5: (N > 2 || N < 20) =");
          if ((P > 0 && P < -3))
            Serial.print("true");
          }                                                     // Afirmacio 5
          else {
            Serial.print("false");
          }
  Serial.println("f. Afirmacio 6: (T > 10 || Z) =")
          if (T > 0 || Z)
            Serial.print("true");
          }                                                     // Afirmacio 6
          else {
            Serial.print("false");
          }
  Serial.println("g. Afirmacio 7: (P")
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
