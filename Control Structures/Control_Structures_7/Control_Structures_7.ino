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
  for (int i<15)
 Serial.print("-")

//****** Loop  ***********************************************************

void loop()     // we need this to be here even though its empty
{
}
