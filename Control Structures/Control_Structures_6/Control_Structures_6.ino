/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                        control structures                            **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:02/04/2017     **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
int comptar = 15;

//****** Setup  **********************************************************

void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}
//****** Loop  ***********************************************************

void loop()     // we need this to be here even though its empty
{
}
//***************************** FUNCIONS *********************************

// serialprint fa que s'inprimeixi "ara contarè de o a " i el nombre el qual
//tinguem posat com a incognitra 
//amb el for  i i=0 fem que es sumi mumeros fins a partir de 0
// entre numero i numero s'inprimeix- gracies a l'ultim serial.print
// quant arriba el numero variable (i) para de comptar gracies a i<=comptar 
