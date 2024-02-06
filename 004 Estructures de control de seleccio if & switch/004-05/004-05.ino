/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Data: 06/02/2023                                    Nom: Gerard Maidana      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int taula = 2;
int taulab = 3;
int taulac = 4;
int taulad = 5;
int taulae = 6;
int taulaf = 7;
int taulag = 8;
int taulah = 9;
int taulai = 10;
//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  delay(2000);
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulab );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulab );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulab*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulac );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulac );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulac*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulad );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulad );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulad*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulae );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulae );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulae*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulaf );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulaf );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulaf*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulag );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulag );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println( taulag*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulah );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulah );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulah*i);    
  }
  Serial.print("Taula de multiplicar del ");
  Serial.println( taulai );
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print( taulai );
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taulai*i);    
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions **************************************************************