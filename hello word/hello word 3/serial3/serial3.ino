/*************************************************************************
**                                                                      **
**                             TÍTOL:                                   **
**                           Hello word                                 **
**                                                                      **
**  NOM:Oleguer Canamasas                           DATA:30/01/2017     **
*************************************************************************/

//****** Includes  *******************************************************


//****** Variables *******************************************************


//****** Setup  **********************************************************

void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}
 
//****** Loop  ***********************************************************

void loop()                 // run over and over again
{
  Serial.println("Hello world!");  
  delay(1000);
}

//***************************** FUNCIONS *********************************
El programa fa que s'inprimeixi el que hi ha escrit dins els perentesis 
  entre les cometes i canvi de linia un cop per segon
