/*********************************************************************************
**                                                                              **
**                              Hello World                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************

//********* Setup ****************************************************************
void setup()              
{
  Serial.begin(9600);
  Serial.println( "Escojen el numero de cuenta");
  delay(1000);
  Serial.println("1. Comprovar el numero de targeta");  // prints Hello world!
  delay(1000);
  Serial.println("2. Comprovar el numero de cuenta");  // prints Hello world!
  delay(1000);
  Serial.println("3. Buscar un digito perdido de la targeta de credito");
  delay(1000);  // prints Hello world!    
}

//********* Loop *****************************************************************
void loop()                     
{

 }

//********* Funcions *************************************************************
