/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                        control structures                            **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:03/04/2017     **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************
int comptar = 11;
int i = 0;

//****** Setup  **********************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  } 
}

//****** Loop  ***********************************************************
void loop()   // we need this to be here even though its empty
{
}
//***************************** FUNCIONS *********************************
// es va repetint el proces fins que no es cert i para
// la diferencia del for i el while es que el for va repetint el que
//hi ha al parentesis mentre que el while repeteix el proces fins que
//no es compleix la condució 
