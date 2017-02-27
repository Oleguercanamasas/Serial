/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                         Control Structures                           **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:27/02/2017     **
*************************************************************************/

//****** Includes  *******************************************************

//****** Variables *******************************************************
int tempAigua = 100;
//****** Setup  **********************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
 if ( tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");
  } 
  if ( tempAigua == 100)
  {
    Serial.print("Aigua bullint");
  } 
}
//****** Loop  ***********************************************************
void loop()   // we need this to be here even though its empty
{
}

//***************************** FUNCIONS *********************************

