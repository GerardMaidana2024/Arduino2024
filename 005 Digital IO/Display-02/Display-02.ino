/**********************************************************************************
**                                                                               **
**                           on/off button control LED                           **
**                                                                               **
**    Data: 22/02/2024                                Nom: Gerard Maidana        **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11; 
unsigned long temps = 800;   

//********** Setup ****************************************************************
void setup()
{
  pinMode(segA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
}

//********** Loop *****************************************************************
void loop()
{
   digitalWrite(segA, HIGH); // ZERO
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, LOW);
 delay(temps);
   digitalWrite(segA, LOW);  // UNO
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);
 delay(temps);
   digitalWrite(segA, HIGH);  // DOS
   digitalWrite(segB, HIGH);
   digitalWrite(segC, LOW);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, LOW);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, HIGH);  //TRES
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, LOW);  //CUATRO
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, HIGH);  //CINCO
   digitalWrite(segB, LOW);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, LOW);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, LOW);  //SEIS
   digitalWrite(segB, LOW);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, HIGH);  // SIETE
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);
 delay(temps);
   digitalWrite(segA, HIGH); // OCHO
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, HIGH); // nueve
   digitalWrite(segB, HIGH);
   digitalWrite(segC, HIGH);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, HIGH);
   digitalWrite(segG, HIGH);
 delay(temps);
   digitalWrite(segA, LOW);  // Apagado
   digitalWrite(segB, LOW);
   digitalWrite(segC, LOW);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);
 delay(temps);
}
//********** Funcions *************************************************************