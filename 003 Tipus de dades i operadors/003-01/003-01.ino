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
  Serial.print("a. Afirmacio 1: (T > 10 && T < 14) = ");
          if (T > 10 && T < 14) 
          {
            Serial.println("true");
          }                                                      // Afirmacio 1
          else 
          {
            Serial.println("false");
          }
  Serial.print("b. Afirmacio 2: (Y > 4 || Y < 7)= ");
          if ((Y > 4 || Y < 7)) 
          {
            Serial.println("true");
          }                                                     // Afirmacio 2
          else 
          {
            Serial.println("false");
          }
  Serial.print("c. Afirmacio 3: (K > 8 && K < 10) = ");
          if ((K > 8 && K < 10)) 
          {
            Serial.println("true");
          }                                                     // Afirmacio 3
          else 
          {
            Serial.println("false");
          }
  Serial.print("d. Afirmacio 4: (N > 2 || N < 20) = ");
          if ((N > 2 || N < 20)) 
          {
            Serial.println("true");
          }                                                     // Afirmacio 4
          else 
          {
            Serial.println("false");
          }
  Serial.print("e. Afirmacio 5: (N > 2 || N < 20) = ");
          if ((P > 0 && P < -3)) 
          {
            Serial.println("true");
          }                                                     // Afirmacio 5
          else 
          {
            Serial.println("false");
          }
Serial.print("f. Afirmacio 6: (T > 10 || Z) = ");
          if(T > 0 || Z) 
          {
            Serial.println("true");
          }                                                     // Afirmacio 6
          else 
          {
            Serial.println("false");
          }
Serial.print("g. Afirmacio 7: ((P > 0 && B) = ");
          if(P > 0 && B) 
          { 
            Serial.println("true");
          }                              // Afirmacio 7
          else 
          {
            Serial.println("false");
          }
Serial.print("h. Afirmacio 8: (W && B) = ");
          if(W && B) 
          { 
            Serial.println("true"); 
          }                             // Afirmacio 8
          else 
          {
            Serial.println("false"); 
          }
Serial.print("i. Afirmacio 9: (W && A) = ");
          if(W && A) 
          { 
            Serial.println("true");
          }                             // Afirmacio 9
          else 
          {
            Serial.println("false");
          }
}

void loop() {
  // put your main code here, to run repeatedly:

}
