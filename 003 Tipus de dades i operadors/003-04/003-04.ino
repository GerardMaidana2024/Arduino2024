/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**   Data:01/02/2023                                      Nom: GerardMaidana     **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  delay(2000);
  if (tempAigua < 90)
    {
      Serial.println("Aigua encara no bull");
    }
  else if (tempAigua >= 90 && tempAigua < 100)
    {
      Serial.println("aigua a punt de bullir");
    }
  else if (tempAigua == 100)
    {
      Serial.println("Aigua a 100ºC");
    }
  else if(tempAigua >100)
    { 
      Serial.println("Aigua bullint!");
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