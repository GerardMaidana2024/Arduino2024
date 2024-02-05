/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**   Data:01/02/2023                                      Nom: GerardMaidana     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float CO2 = 19.1;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  delay(2000);
     if (CO2 <= 3.5)
      {
        Serial.println("Qualificacio energetica A");
      }
     else if (CO2 >= 3.6 && CO2 < 11)
      {
        Serial.println("Qualificacio energetica B");
      }
     else if (CO2 >= 11.1 && CO2 < 17.6)
      {
        Serial.println("Qualificacio energetica C");
      }
     else if (CO2 >= 17.7 && CO2 < 38.1)
      {
        Serial.println("Qualificacio energetica D");
      }
     else if (CO2 >= 38.2 && CO2 < 43.2)
      {
        Serial.println("Qualificacio energetica E");
      }
     else if (CO2 = 43.2)
      { 
        Serial.println("Qualificacio energetica F");
      }
     else if (CO2 < 43.2)
      {
        Serial.println("Qualificacio energetica G");
      }
    else
  {
   
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************