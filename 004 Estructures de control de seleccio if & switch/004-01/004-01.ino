/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**  Data: 05/02/2023                                    Nom: Gerard Maidana      **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int comptar = 11;
//********** Setup ****************************************************************

void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  delay(2000);
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}
void loop()     // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************