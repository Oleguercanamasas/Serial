/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                           Control Structures                         **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA 27/02/2017     **
*************************************************************************/

//****** Includes  *******************************************************

//****** Variables *******************************************************
int tempAigua = 100;
//****** Setup  **********************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}
//****** Loop  ***********************************************************
void loop()   // we need this to be here even though its empty
{
}

//***************************** FUNCIONS *********************************
L'arduino nomes reacciona quant tempAigua es mes gran que 100
per tant si tempAigua es 100 o menys el missatge no surt
